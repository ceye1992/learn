#include <iostream>
using std::endl; using std::cin; using std::cout;
int fact(int n)
{
    int ret =1;//用来保存结果
    while(n != 1)
        ret *= n--;
    return ret;
}
int main()
{
    cout << fact(5)<<endl;
    return 0;
}
