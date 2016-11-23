#include <iostream>
using std::endl;
using std::cout;
using std::cin;
using std::string;
int main()
{
    //把输入的字符全部变成X
    cout << "Enter some strings: "<<endl;
    string str;
    cin >> str;
    for(auto &c : str)
        c = 'X';

    cout << str <<endl;

    return 0;
}
