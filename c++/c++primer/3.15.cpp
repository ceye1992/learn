#include <iostream>
#include <string>
#include <vector>
using std::endl; using std::cin; using std::cout; using std::vector;using std::string;
int main()
{
    //读取字符串，并将他们存入vector
    string s1;
    vector<string> str;
    while(cin >> s1)
        str.push_back(s1);

    return 0;
}
