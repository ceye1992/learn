#include <iostream>
int main()
{
    //����ָ���ֵ�Լ�ָ����ָ�����ֵ
    int i1 = 5, i2 = 6, *p;
    p = &i1; //ָ��ָ��i
    *p = 10;  //�ı�p��ָ���i1��ֵ
    std::cout << *p << i1 <<std::endl;

    p = &i2; //�ı�pָ��i2
    std::cout << *p <<std::endl;

    return 0;
}
