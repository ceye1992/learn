#include <iostream>
#include "Sales_item.h"
int main()
{
    //��괦�����
    Sales_item total; //������һ�����׼�¼�ı���
    //�����һ�����ݣ�����֤�����ݿ��Դ���
    if(std::cin >> total){
        Sales_item trans;  //����ͱ���
        //������һ������
        while(std::cin >> trans){
            if(total.isbn() == trans.isbn())//�ж�ISBN�Ƿ���ͬ
                total += trans; //�������
            else{
                //��ӡǰһ����Ľ��
                std::cout << total <<std::endl;
                total = trans; //���±�ʾ��һ����
            }
        }
        std::cout << trans << std::cout; //���һ����Ľ��
    }
    else{
        std::cerr <<"No data?" << std::endl;
        return -1;  //��ʾʧ��
    }

    return 0;
}
