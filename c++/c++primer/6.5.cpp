#include <iostream>
using std::cin; using std::cout; using std::endl;
//输出一个数的绝对值
int abs(int n)
{
    return (n > n ? n :(- n));
}
int main()
{
    cout <<"Enter one number : "<<endl;
    int i ; //保存输入流
    cin >> i;
    cout << abs(i) <<endl;
    return 0;
}
