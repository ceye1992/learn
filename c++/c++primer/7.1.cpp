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
    if(cin >> total.bookNo >> total.unites_sold >> total.revenue){ //保存第一组输入数据的变量
        Sales_data trans; //保存下一组数据的变量
        while(cin >> trans.bookNo >> trans.unites_sold >> trans.revenue){
            if(total.bookNo == trans.bookNo){//如果书号相同
                total.unites_sold += trans.unites_sold;
                total.revenue += trans.revenue;
            }
            else{
                cout << total.bookNo << total.unites_sold << total.revenue <<endl; //输出数据
                total.bookNo = trans.bookNo;
                total.unites_sold = trans.unites_sold;
                total.revenue = trans.revenue;
            }
        }
    cout << total.bookNo << " " << total.unites_sold << " " << total.revenue <<" "; //输出最后一组数据
    }
    else {
        std::cerr <<"No data!" <<endl;
        return -1;
    }
    return 0;
}
