#include <iostream>
int main()
{
    int i = 42; //��ֵ
    int *p1 = &i;  //ָ��
    *p1 = *p1 * *p1; //�ı�p1ָ�����i��ֵ��ʹ֮���� 42* 42

    std::cout << *p1 <<" " << i <<std::endl;
    return 0;
}
