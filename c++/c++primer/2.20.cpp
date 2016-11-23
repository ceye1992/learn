#include <iostream>
int main()
{
    int i = 42; //赋值
    int *p1 = &i;  //指针
    *p1 = *p1 * *p1; //改变p1指向对象i的值，使之等于 42* 42

    std::cout << *p1 <<" " << i <<std::endl;
    return 0;
}
