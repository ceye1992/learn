#include <iostream>
#include <string>
using std::string;
using std::cout; using std::cin; using std::endl;
//接受两个实参并且把实参的内容链接成一个string
int main(int arg, char * argv)
{
    string str;
    for(int i = 0; i != arg; ++i)
        str += argv[i];
    cout << str <<endl;
    return 0;
}
