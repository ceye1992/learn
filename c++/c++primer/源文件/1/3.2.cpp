#include <iostream>
#include <string>
using std::string;
using std::cout; using std::cin;
using std::endl;

int main()
{
    //读取一行
  /*  string s;
    while(getline(cin, s))
        cout << s<< endl; */
    string a;
    //读取一个字
    while(cin >> a)
        cout << a <<endl;

    return 0;
}
