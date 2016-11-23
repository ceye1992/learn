#include <iostream>
using std::cout; using std::cin; using std::endl;
//用 指针形参交换两个整数的值
void exchange(int *m, int *n)
{
    int temp = *m;
    *m = *n;
    *n = temp;
}
int main()
{
    cout << "Enter two number: " << endl;
    int i , n;
    cin >> i >> n;
    exchange(&i, &n);
    cout << i << n <<endl;
    return 0;
}
