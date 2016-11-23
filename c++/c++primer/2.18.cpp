#include <iostream>
int main()
{
    //更改指针的值以及指针所指对象的值
    int i1 = 5, i2 = 6, *p;
    p = &i1; //指针指向i
    *p = 10;  //改变p所指向的i1的值
    std::cout << *p << i1 <<std::endl;

    p = &i2; //改变p指向i2
    std::cout << *p <<std::endl;

    return 0;
}
