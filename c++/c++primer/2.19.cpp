#include <iostream>
int main()
{
    int i = 10;
    int &i1 = i; //���ã�ʵ�����൱�ڸ�i��������һ������i1
    int *p = &i; //ָ�룬���Խ��п����͸�ֵ�����ҿ���ָ��ͬ�Ķ���

    std::cout << i << " " << i1 << " " << *p <<std::endl;

    return 0;
}
