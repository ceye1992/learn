#include <iostream>
#include <string>
using std::endl; using std::cout; using std::cin;
using std::string;
int main()
{
    //从标准输入中读取两个整数，输出第一个数除以第二个数的结果
    int a, b;
    cin>>a >> b;
    cout << a / b <<endl;
    return 0;
}
