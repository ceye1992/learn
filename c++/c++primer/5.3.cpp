#include <iostream>
int main()
{
    //ʹ��whileѭ����50��100���������
    int i = 50, sum = 0;
    while(i != 100)
        sum += i, ++i;
    std::cout << sum <<std::endl;

    return 0;
}
