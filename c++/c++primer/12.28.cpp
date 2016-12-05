#include <vector>
#include <algorithm>
#include <iostream>
#include <set>
#include <map>
#include <string>
#include <memory>
#include <fstream>
#include <sstream>

using std::vector; using std::string; using std::shared_ptr;

int main()
{
    std::ifstream ifs("word.txt"); //接受的文件名
    vector<string> input;
    std::map<string, std::set<decltype(input.size())>> dictionary;
    decltype(input.size()) LineNo{0};


    for(string line; std::getline(ifs, line); ++LineNo){
        input.push_back(line);
        std::istringstream line_stream(line);
        for(string text, word; line_stream>>text; word.clear()){
                //输入单词，并且去除标点符号
            std::remove_copy_if(text.begin(), text.end(),
                                std::back_inserter(word), ispunct);
            //记录单词和他所在的行
            dictionary[word].insert(LineNo);
        }
    }

    while(true){
        std::cout <<"enter word you want to look for, or q to quit: "<<std::endl;
        string s;
        if(!(std::cin >> s) || s == "q") break;
        auto found = dictionary.find(s);
        if(found != dictionary.end()){
                        std::cout << s << " occurs " << found->second.size()
                      << (found->second.size() > 1 ? " times" : " time")
                      << std::endl;
        for(auto i : found->second)
            std::cout <<"\t (line " <<i+1 << " )" <<input.at(i)
            <<std::endl;
        }
        else
            std::cout << s <<" occurs 0 times " <<std::endl;

        }
}
