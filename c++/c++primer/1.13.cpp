#include <iostream>

int main()
{
    //����50��100�ĺ�
    int sum1 = 0;
    for (int i = 50; i <= 100; ++i)
        sum1 += i;
    std::cout << "The sum of 50 to 100 is"
              << sum1 << std::endl;

    //˳���ӡ��10��0֮�������
    for (int i1 = 10; i1 >= 0; --i1)
        std::cout << i1 << std::endl;

    //��ʾ����������������ӡ��Χ�ڵ���������
    int val1 = 0, val2 = 0;
    std::cout << "Enter two numbers(small and big): " <<std::endl;
    std::cin >> val1 >> val2;

    for(val1; val1 <= val2; ++val1)
        std::cout << val1 << std::endl;

    return 0;

}
