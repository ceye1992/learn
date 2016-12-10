#ifndef EX13_42_H_INCLUDED
#define EX13_42_H_INCLUDED

#include <string>
#include <string>
#include <memory>
#include <iostream>
#include <fstream>
#include <map>
#include <set>
#include <sstream>
#include <algorithm>

using std::string;

class StrVec{
public:
    StrVec():elements(nullptr), first_free(nullptr), cap(nullptr){}
    StrVec(const StrVec&);
    StrVec operator=(const StrVec&, const StrVec);
    ~StrVec();

    //向后面添加元素
    void push_back(const std::string);
    //所含元素的总量
    size_t size(){return first_free - elements;}
    //所拥有的内存总数
    size_t capacity(){return cap - first_free;}
    //返回开始
    std::string* begin()const {return elements;}
    //返回最后一个元素
    std::string* end() const {return first_free;}

    std::string& at(size_t pos) { return *(elements + pos); }
    const std::string& at(size_t pos) const { return *(elements + pos); }

    void reserve(size_t new_cap);
    void resize(size_t count);
    void resize(size_t count, const std::string&);


private:
    std::pair<std::string*, std::string*> alloc_n_copy(const std::string*, const std::string*)
    void free();
    void chk_n_alloc()
    {
        if(size(0 == capacity())) reallocate();
    }
    void reallocate();
    void alloc_n_move(size_t rew_cap);
    void range_initialize(const std::string*, const std::string*);

    std::string* elements;
    std::string* first_free;
    std::string* cap;
    std::allocator<string> alloc;
};

void StrVec::push_back(const std::string& s)
{
    chk_n_alloc();
    alloc.construct(first_free++, s);
}

std::pair<std::string*, std::string*> StrVec::alloc_n_copy(const std::string* b,
                                                           const std::string* e)
{
    auto data = alloc.allocate(e - b);
    return {data, std::uninitialized_copy(b, e, data)};
}

void StrVec::free()
{
    if (elements) {
        for (auto p = first_free; p != elements;) alloc.destroy(--p);
        alloc.deallocate(elements, cap - elements);
    }
}

void StrVec::range_initialize(const std::string* first, const std::string* last)
{
    auto newdata = alloc_n_copy(first, last);
    elements = newdata.first;
    first_free = cap = newdata.second;
}

StrVec::StrVec(const StrVec& rhs)
{
    range_initialize(rhs.begin(), rhs.end());
}

StrVec::StrVec(std::initializer_list<std::string> il)
{
    range_initialize(il.begin(), il.end());
}

StrVec::~StrVec()
{
    free();
}

StrVec& StrVec::operator=(const StrVec& rhs)
{
    auto data = alloc_n_copy(rhs.begin(), rhs.end());
    free();
    elements = data.first;
    first_free = cap = data.second;
    return *this;
}

void StrVec::alloc_n_move(size_t new_cap)
{
    auto newdata = alloc.allocate(new_cap);
    auto dest = newdata;
    auto elem = elements;
    for (size_t i = 0; i != size(); ++i)
        alloc.construct(dest++, std::move(*elem++));
    free();
    elements = newdata;
    first_free = dest;
    cap = elements + new_cap;
}

void StrVec::reallocate()
{
    auto newcapacity = size() ? 2 * size() : 1;
    alloc_n_move(newcapacity);
}

void StrVec::reserve(size_t new_cap)
{
    if (new_cap <= capacity()) return;
    alloc_n_move(new_cap);
}

void StrVec::resize(size_t count)
{
    resize(count, std::string());
}

void StrVec::resize(size_t count, const std::string& s)
{
    if (count > size()) {
        if (count > capacity()) reserve(count * 2);
        for (size_t i = size(); i != count; ++i)
            alloc.construct(first_free++, s);
    }
    else if (count < size()) {
        while (first_free != elements + count) alloc.destroy(--first_free);
    }
}
std::pair<std::string*, std::string*> StrVec::alloc_n_copy(const std::string* b, const std::string* e)


StrVec::StrVec(const StrVec&rhs)
{
    range_initialize(rhs.begin(), rhs.end());
}

class QueryResult;
class TextQuery {
public:
    TextQuery(std::ifstream&);
    QueryResult query(const std::string&) const;

private:
    std::shared_ptr<StrVec> input;
    std::map<std::string, std::shared_ptr<std::set<size_t>>> result;
};

class QueryResult {
public:
    friend std::ostream& print(std::ostream&, const QueryResult&);

public:
    QueryResult(const std::string& s, std::shared_ptr<std::set<size_t>> set,
                std::shared_ptr<StrVec> v)
        : word(s), nos(set), input(v)
    {
    }

private:
    std::string word;
    std::shared_ptr<std::set<size_t>> nos;
    std::shared_ptr<StrVec> input;
};

std::ostream& print(std::ostream&, const QueryResult&);


TextQuery::TextQuery(std::ifstream& ifs) : input(new StrVec)
{
    size_t lineNo = 0;
    for (string line; std::getline(ifs, line); ++lineNo) {
        input->push_back(line);
        std::istringstream line_stream(line);
        for (string text, word; line_stream >> text; word.clear()) {
            // avoid read a word followed by punctuation(such as: word, )
            std::remove_copy_if(text.begin(), text.end(),
                                std::back_inserter(word), ispunct);
            // use reference avoid count of shared_ptr add.
            auto& nos = result[word];
            if (!nos) nos.reset(new std::set<size_t>);
            nos->insert(lineNo);
        }
    }
}

QueryResult TextQuery::query(const string& str) const
{
    // use static just allocate once.
    static std::shared_ptr<std::set<size_t>> nodate(new std::set<size_t>);
    auto found = result.find(str);
    if (found == result.end())
        return QueryResult(str, nodate, input);
    else
        return QueryResult(str, found->second, input);
}

std::ostream& print(std::ostream& out, const QueryResult& qr)
{
    out << qr.word << " occurs " << qr.nos->size()
        << (qr.nos->size() > 1 ? " times" : " time") << std::endl;
    for (auto i : *qr.nos)
        out << "\t(line " << i + 1 << ") " << qr.input->at(i) << std::endl;
    return out;
}

#endif // EX13_42_H_INCLUDED
