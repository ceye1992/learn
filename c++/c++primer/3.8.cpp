#include <iostream>
#include <string>
using std::endl;
using std::string;
using std::cin;
using std::cout;
int main()
{
    //使用传统的for将所有输入字符变成x
    cout << "Enter some words: "<<endl;
    string s;  //接受输入的数据
    cin >> s;
    for(std::string::size_type index = 0; index < s.size(); ++index)
        s[index] = 'X';

    cout << s <<endl;

    //使用while
    cout <<"Enter some words: " <<endl;
    string c;
    cin >> c;
    decltype(c.size()) n = 0;
    while( n < c.size()){
        c[n] = 'Y';
        ++n;
    }
    cout << c<< endl;


    return 0;

}
