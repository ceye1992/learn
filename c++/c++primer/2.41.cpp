#include <iostream>
#include <string>

struct Sales_date{
    std::string bookNo;
    unsigned units_solds = 0;
    double revenue = 0.0;
    };
int main()
{
    //��������isbn�Ķ���������ǵĺ�
    Sales_date book;
    double price;
    std::cin >> book.bookNo >> book.units_solds >> price;
    book.revenue = book.units_solds * price;
    std::cout << book.bookNo <<" "<< book.units_solds <<" "<< book.revenue <<" "<< price<< std::endl;


    //��ȡ���������ͬIsbn�Ķ���������м�¼�ĺ�
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


    //��ȡ����������¼����ͳ���м������ۼ�¼
    Sales_date book3, book4;
    double price3, price4;
    if(std::cin >> book3.bookNo >> book3.units_solds >> price3){//��book3���ɻ���
        while(std::cin >> book4.bookNo >> book4.units_solds >>price4){//����book4
            if( book3.bookNo == book4.bookNo){ //���isbn���
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
        //ѭ�����������������һ������
        book3.revenue = price3 * book3.units_solds;
        std::cout << book3.bookNo <<" " << book3.units_solds << " "
                   << book3.revenue <<std::endl;
        }
}


