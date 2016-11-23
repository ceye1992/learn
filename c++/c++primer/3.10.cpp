#include <iostream>
#include <cctype>
#include <string>
using std::endl;
using std::cout;
using std::cin;
using std::string;
int main()
{
    //读入一个包含标点符号的字符串，输出不含标点的
    cout << "Enter some words: "<<endl;
    string str;
    cin >> str; //输入的流
    decltype(str.size()) index = 0; //下标
    while(index < str.size()){
        if(!ispunct(str[index])){
            cout<<str[index] <<endl;
            ++index;
        }
        else
            ++index;
    }
    return 0;
}
