#include <iostream>
#include <string>
using std::endl; using std::cin; using std::cout;
using std::string;
int main()
{
    //输入两个string并且输出最小的那个
    string rap;//循环继续的条件
    do{
        cout <<"Enter two strings: "<<endl;
        string str1, str2;
        cin >> str1 >>str2;
        cout << (str1 > str2 ? str2 : str1) <<endl;
        cout <<"Enter yes to continue"<<endl;
        cin>> rap;
    }while(!rap.empty() && rap[0] == 'y');

    return 0;
}
