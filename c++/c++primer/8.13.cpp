#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::ostringstream; using std::istringstream;
using std::ifstream;using std::string;
using std::cerr; using std::vector; using std::isdigit;

struct PersonInfo{
    string name;
    vector<string> phones;
};

bool valid(const string &str) //��֤�绰�����Ƿ�������
{
    return isdigit(str[0]);
}

string format(const string &str) //�ı�绰����ĸ�ʽ
{
    return str.substr(0, 3) + "-" + str.substr(3, 3) + "-" + str.substr(6);
}

int main(int argc, char ** argv)
{
    ifstream ifs(argv[1]);
    if(!ifs){
        cerr <<"No data"<<endl;
        return -1;
    }
    string line, word;  //�����������ֺ͵绰����
    vector<PersonInfo> people;
    istringstream record;
    while(getline(ifs, line)){
        PersonInfo info;
        record.clear();
        record.str(line);
        record >> info.name;
        while(record >> word) info.phones.push_back(word);
        people.push_back(info);
    }
    //��֤�绰��������
    for(const auto &entry : people ){
        ostringstream formatted, badNums;
        for(const auto &nums : entry.phones){
            if(!valid(nums)){
                badNums << " " << nums;
            }else
            formatted << " " << format(nums);
        }
        if(badNums.str().empty()) //û�д�������
            cout << entry.name <<" "
                <<formatted.str() <<endl; //��ʽ������
        else
            cerr <<"Input error :" << entry.name
            <<" invalid number(s)" <<badNums.str() <<endl;

        return 0;
    }
}
