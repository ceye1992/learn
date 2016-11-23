#include <iostream>
int main()
{
    int i = 10;
    int &i1 = i; //引用，实际上相当于给i另外起了一个名字i1
    int *p = &i; //指针，可以进行拷贝和赋值，并且可以指向不同的对象

    std::cout << i << " " << i1 << " " << *p <<std::endl;

    return 0;
}
