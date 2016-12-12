#ifndef 14_2_H_INCLUDED
#define 14_2_H_INCLUDED
#include <string>
#include <iostream>

class Sales_data{
    friend std::istream& operator>>(std::istream&, Sales_data&); //重载输入函数
    friend std::ostream& operator<<(std::ostream&, const Sales_data&); //重载输出函数
    friend Sales_data operator+(const Sales_data&, const Sales_data&); //重载加法
public:
    Sales_date(const Sales_data&s, unsigned n, double p): bookNo(s), units_sold(n), revenue(p){}
    Sales_data(): Sales_data("", 0, 0.0f){}
    Sales_data(const std::string& s): Sales_data(s, 0, 0.0f){}
    Sales_data(std::istream& is);

    Sales_data& operator+=(const Sales_data&); //重载复合运算
    std::string isbn() const {return bookNO;}//返回书籍的isbn号

private:
    inline double avg_price() const;

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data::Sales_data(std::istream& is):Sales_data()
{
    is>>*this;
}

Sales_data Sales_data::operator+=(const Sales_data& rhs)
{
    units_sold +=rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

std::istream operator>>(std::istream & is, Sales_data &item)
{
    double price = 0.0;
    is >> item.bookNo >> item.units_sold>>price;
    if(is)
        item.revenue = price * item.units_sold;
    else
        item = Sales_data();
    return is;
}

std::ostream operator<<(std::ostream & os, Sales_data& item)
{
    os <<item.bookNo << " " <<item.units_sold<<" "<<item.revenue
        <<" "<<item.avg_price();
    return os;
}

Sales_data operator+(const Sales_datd& lhs, Sales_data& rhs)
{
    Sales_data sum = lhs;
    sum += rhs;
    return sum;
}

inline double Sales_data::avg_price()const
{
    return units_sold ? revenue / units_sold : 0;

}
#endif // 14_2_H_INCLUDED
