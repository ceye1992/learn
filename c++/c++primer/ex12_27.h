#ifndef EX12_27_H_INCLUDED
#define EX12_27_H_INCLUDED

#include <string>
#include <iostream>
#include <memory>
#include <fstream>
#include <vector>
#include <set>
#include <map>
#include <sstream>
#include <algorithm>
#include <iterator>

using std::string; using std::vector; using std::shared_ptr;

class QueryResult;
class TextQuery{
public:
    using LineNO vector<string>::size_type;
    TextQuery(std::fstream);
    QueryResult query(const string&) const;

private:
    shared_ptr<vector<string>> input; //保存输入的文件文本
    std::map<string, shared_ptr<std::set<LineNo>>> result; //保存每一个单词和其所在的行
};

class QueryResult{
public:
    friend  std::ostream& print(std::ostream&, const QueryResult&);

public:
    QueryResult (const string& s, shared_ptr<std::set<TextQuery::LineNo>>set,
                 shared_ptr<vector<string>> v): word(s), nos(set), input(v) {}
private:
    string word;  //给定单词
    shared_ptr<std::set<TextQuery::LineNo> nos;// 单词关联的行号
    shared_ptr<vector<string>> input;//单词的文本

};

TextQuery::TextQuery(std::ifstream& ifs) : input(new vector<string>)
{
    LineNo lineNo{0};
    for (string line; std::getline(ifs, line); ++lineNo) {
        input->push_back(line);
        std::istringstream line_stream(line);
        for (string text, word; line_stream >> text; word.clear()) {
            // avoid read a word followed by punctuation(such as: word, )
            std::remove_copy_if(text.begin(), text.end(),
                                std::back_inserter(word), ispunct);
            // use reference avoid count of shared_ptr add.
            auto& nos = result[word];
            if (!nos) nos.reset(new std::set<LineNo>);
            nos->insert(lineNo);
        }
    }
}

QueryResult TextQuery::query(const string& str) const
{
    static shared_ptr<std::set<LineNo>> nodate(new std::set<LineNo>);
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
#endif // EX12_27_H_INCLUDED
