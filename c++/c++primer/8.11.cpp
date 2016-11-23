#include <vector>
#include <iostream>
#include <sstream>

using std::vector; using std::cin; using std::endl; using std::cout;
using std::stringstream; using std::string;

struct PersonInfo{
    string name;
    vector<string> phones;
};

int main()
{
        string line, word; //保存输入的一行和一个单词
        vector<PersonInfo> people;
        stringstream record;
        while(getline(cin, line)){
            PersonInfo info;
            record.clear(); //recprd复位
            record.str(line);
            record>> info.name;
            while(record >> word)
                info.phones.push_back(word);
            people.push_back(info);
        }

        return 0;
}
