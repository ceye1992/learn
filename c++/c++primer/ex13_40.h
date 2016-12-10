#ifndef EX13_40_H_INCLUDED
#define EX13_40_H_INCLUDED
#include <memory>
#include <string>
#include <initializer_list>

class StrVec{
public:
    StrVec(): elements(nullptr), first_free(nullptr), cap(nullptr){}
    StrVec(const StrVec&);
    StrVec operator=(const StrVec&, const StrVec&);
    ~StrVec();
    StrVec(std::initializer_list<std::string>);

    void push_back(const std::string&);  //向后面加入string
    size_t size(){return first_free -elements;} //返回含有的元素
    size_t capacity(){return cap - elements;}  //一共有多大的内存
    std::string* begin() const {return elements;}
    std::string* end() const {return first_free;}

    void reserve(size_t new_cap);
    void resize(size_t count);
    void resize(size_t count, const std::string);

private:
    std::pair<std::string*, std::string*> alloc_n_copy(const std::string*, const std::string*);//分配足够的内存并将元素拷贝到新的对象
    void free();  //销毁元素并释放内存
    void chk_n_alloc(){if (size()) ==capacity() reallocate();}   //保证至少有一个元素的空间
    void reallocate();    //获得更多的内存并拷贝元素
    void alloc_n_move(size_t new_cap);
    void range_initialize(const std::string*, const std::string*);//构建一个StrVec

    std::string* elements;
    std::string* first_free;
    std::string* cap;
    std::allocator<std::string> alloc;

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

#endif // EX13_40_H_INCLUDED
