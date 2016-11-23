#include <iostream>
#include <string>

struct Sales_date{
    std::string bookNo;
    unsigned units_solds = 0;
    double revenue = 0.0;
    };
int main()
{
    //读入两个isbn的对象，输出他们的和
    Sales_date book;
    double price;
    std::cin >> book.bookNo >> book.units_solds >> price;
    book.revenue = book.units_solds * price;
    std::cout << book.bookNo <<" "<< book.units_solds <<" "<< book.revenue <<" "<< price<< std::endl;


    //读取多个具有相同Isbn的对象，输出所有记录的和
    Sales_date book1, book2;
    double price1, price2;
    std::cin >> book1.bookNo >> book.units_solds >> price1;
    std::cin >> book2.bookNo >> book.units_solds >> price2;
    book1.revenue = book1.units_solds * price1;
    book2.revenue = book2.units_solds * price2;

    if(book1.bookNo == book2.bookNo){
        std::cout << book1.bookNo <<" "<< book1.units_solds +book2.units_solds
                  <<" " << book1.revenue +book2.revenue << std::endl;
        return 0;
    }
    else{
        std::cout << "Book isbn is not the same one" << std::endl;
        return -1;
    }


    //读取多条操作记录，并统计有几条销售记录
    Sales_date book3, book4;
    double price3, price4;
    if(std::cin >> book3.bookNo >> book3.units_solds >> price3){//把book3当成基本
        while(std::cin >> book4.bookNo >> book4.units_solds >>price4){//输入book4
            if( book3.bookNo == book4.bookNo){ //如果isbn相等
                book3.revenue = price3 * book3.units_solds;
                book4.revenue = price4 * book4.units_solds;
                book3.units_solds = book3.units_solds + book4.units_solds;
                book3.revenue = book3.revenue + book4.revenue;
            }
            else{
                std::cout << book3.bookNo <<" " << book3.units_solds << " "
                          << book3.revenue <<std::endl;
                book3.bookNo = book4.bookNo;
                book3.units_solds = book4.units_solds;
                price3 = price4;
            }
        }
        //循环结束，最后输出最后一组数据
        book3.revenue = price3 * book3.units_solds;
        std::cout << book3.bookNo <<" " << book3.units_solds << " "
                   << book3.revenue <<std::endl;
        }
}


