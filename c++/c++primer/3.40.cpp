#include <iostream>
#include <string>
#include <cstring>
using std::endl; using std::endl; using std::cout;
using std::string;
int main()
{
    //定义两个字符串数组并初始化他们
    char c1 [] = "Hello";
    char c2[] = "world";
    char c3[11];

    strcpy(c3, c1);
    strcat(c3, c2);

    for(auto s : c3)
        cout << s <<" ";
    cout << endl;
    return 0;
}
