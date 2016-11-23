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

bool valid(const string &str) //验证电话号码是否是数字
{
    return isdigit(str[0]);
}

string format(const string &str) //改变电话号码的格式
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
    string line, word;  //用来保存名字和电话号码
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
    //验证电话号码后输出
    for(const auto &entry : people ){
        ostringstream formatted, badNums;
        for(const auto &nums : entry.phones){
            if(!valid(nums)){
                badNums << " " << nums;
            }else
            formatted << " " << format(nums);
        }
        if(badNums.str().empty()) //没有错误数字
            cout << entry.name <<" "
                <<formatted.str() <<endl; //格式化的数
        else
            cerr <<"Input error :" << entry.name
            <<" invalid number(s)" <<badNums.str() <<endl;

        return 0;
    }
}
