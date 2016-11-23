#include <string>
#include <iostream>
using std::endl;
using std::string;
using std::cout;
using std::cin;

int main()
{
  /*  //读取字符串并将他们链接起来
    string s1, s2;
    while(cin >> s2)
        s1 += s2;
    cout << s1 << endl;
    */
    //读取字符串，并且用空格把他们链接起来
    string s3, s4;
    while(cin >> s4)
        s3 = s3 + " " + s4;
    cout << s3 <<endl;


    return 0;
}
