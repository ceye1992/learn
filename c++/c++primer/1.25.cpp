#include <iostream>
#include "Sales_item.h"
int main()
{
    //书店处理程序
    Sales_item total; //保存下一条交易记录的变量
    //读入第一组数据，并保证有数据可以处理
    if(std::cin >> total){
        Sales_item trans;  //保存和变量
        //读入下一组数据
        while(std::cin >> trans){
            if(total.isbn() == trans.isbn())//判断ISBN是否相同
                total += trans; //数据相加
            else{
                //打印前一本书的结果
                std::cout << total <<std::endl;
                total = trans; //重新表示下一本书
            }
        }
        std::cout << trans << std::cout; //最后一本书的结果
    }
    else{
        std::cerr <<"No data?" << std::endl;
        return -1;  //表示失败
    }

    return 0;
}
