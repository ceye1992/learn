#include <iostream>
using std::cout; using std::cin; using std::endl;

//函数接受两个参数，一个是int型的指针，一个是int整数，返回较大的那个
int largeOne(const int n1, int *n2)
{
    return (n1 > *n2? n1 : *n2);
}

int main()
{
    int c = 6;
    cout << largeOne(7, &c) <<endl;
    return 0;
}
