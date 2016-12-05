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
    shared_ptr<vector<string>> input; //����������ļ��ı�
    std::map<string, shared_ptr<std::set<LineNO>>> result; //����ÿһ�����ʺ������ڵ���
};

class QueryResult{
public:
    friend  std::ostream& print(std::ostream&, const QueryResult&);

public:
    QueryResult (const string& s, shared_ptr<std::set<TextQuery::LineNo>>set,
                 shared_ptr<vector<string>> v): word(s), nos(set), input(v) {}
private:
    string word;  //��������
    shared_ptr<std::set<TextQuery::LineNo> nos;// ���ʹ������к�
    shared_ptr<vector<string>> input;//���ʵ��ı�

};

TextQuery::Textquery(std::ifstream& ifs): input(new vector<string>)
{
    LineNo LineNo{0};

    for(string line; std::getline(ifs,line); ++LineNO){
        input->push_back(line);
        std::istringstream Line_stream(line);
        for(string text, word; line_stream>>text; word.clear()){
            //��ֹ���������
            std::remove_copy_if(text.begin(), text.end(),
                                std::back_inserter(word), ispunct);
            auto & nos = result[word];
            if(!nos) nos.reset(new std::set<LineNO>);
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
