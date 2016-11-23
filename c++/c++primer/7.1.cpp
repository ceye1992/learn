#include <iostream>
#include <string>
using std::cout; using std::cin; using std::endl;
using std::string;

struct Sales_data{
    string bookNo;
    unsigned unites_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data total;
    if(cin >> total.bookNo >> total.unites_sold >> total.revenue){ //�����һ���������ݵı���
        Sales_data trans; //������һ�����ݵı���
        while(cin >> trans.bookNo >> trans.unites_sold >> trans.revenue){
            if(total.bookNo == trans.bookNo){//��������ͬ
                total.unites_sold += trans.unites_sold;
                total.revenue += trans.revenue;
            }
            else{
                cout << total.bookNo << total.unites_sold << total.revenue <<endl; //�������
                total.bookNo = trans.bookNo;
                total.unites_sold = trans.unites_sold;
                total.revenue = trans.revenue;
            }
        }
    cout << total.bookNo << " " << total.unites_sold << " " << total.revenue <<" "; //������һ������
    }
    else {
        std::cerr <<"No data!" <<endl;
        return -1;
    }
    return 0;
}
