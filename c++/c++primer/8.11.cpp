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
        string line, word; //���������һ�к�һ������
        vector<PersonInfo> people;
        stringstream record;
        while(getline(cin, line)){
            PersonInfo info;
            record.clear(); //recprd��λ
            record.str(line);
            record>> info.name;
            while(record >> word)
                info.phones.push_back(word);
            people.push_back(info);
        }

        return 0;
}
