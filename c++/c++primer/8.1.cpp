#include <iostream>
#include <string>
//�˺����Ӹ������ж�ȡ����
std::istream& fuc(std::istream& is)
{
    std::string buf;
    while(is >> buf)
        std::cout << buf << std::endl;
    is.clear();//����������״̬��λ��ʹ������״̬Ϊ��Ч
    return is;
}