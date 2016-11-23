#include <iostream>
using std::endl; using std::cout; using std::cin;
//一个函数用来计算阶乘
int factor(int n)
{
    int ans = 1;
    while(n != 1)
        ans *= n--;
    return ans;
}
int main()
{
    //让用户输入一个数计算它的阶乘
    cout << "Enter one number: "<<endl;
    int i;//用来保存输入流
    cin >> i;
    cout << factor(i) << endl;
    return 0;
}
