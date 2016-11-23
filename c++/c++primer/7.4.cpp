#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;
struct Sales_data{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    Sales_data &combine(const Sales_data &);
    std::string isbn() const { return bookNo; };
    };

Sales_data & Sales_data::combine (const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue = rhs.revenue;
    return *this;
}

int main()
{
    Sales_data total;
    if(cin >> total.bookNo >> total.units_sold >> total.revenue){ //�����һ���������ݵı���
        Sales_data trans; //������һ�����ݵı���
        while(cin >> trans.bookNo >> trans.units_sold >> trans.revenue){
            if(total.bookNo == trans.bookNo){//��������ͬ
                total.combine(trans);
            }
            else{
                cout << total.bookNo << total.units_sold << total.revenue <<endl; //�������
                total.bookNo = trans.bookNo;
                total.units_sold = trans.units_sold;
                total.revenue = trans.revenue;
            }
        }
    cout << total.bookNo << " " << total.units_sold << " " << total.revenue <<" "; //������һ������
    }
    else {
        std::cerr <<"No data!" <<endl;
        return -1;
    }
    return 0;
}


