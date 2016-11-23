#ifndef EX7_11_H_INCLUDED
#define EX7_11_H_INCLUDED
#include <iostream>
#include <string>
struct Sales_data{
    Sales_data() = default;
    Sales_data::Sales_data(const std::string &s): bookNO(s){};//初始化
    Sales_data::Sales_data(const std::string &s, unsigned n, double p)://初始化
                            bookNo(s), units_sold(n), revenue(n * p){};
    Sales_data (std::istream &);
    std::string isbn() const {return bookNo;};
    Sales_data &combine(const Sales_data &);
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data & Sales_data::combine (const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

std::ostream &print (std::ostream &os, const Sales_data &item)
{
    os<< item.isbn() <<" "<< item.units_sold <<" "<< item.revenue;
    return os;
}
std::istream &read(std::istream &is, Sales_data &items)
{
    double price = 0;
    is >> items.bookNo >> items.units_sold >>price;
    items.revenue = price * items.units_sold;
    return is;
}
Sales_data::Sales_data(std::istream& is)
{
    read(is, *this);
}
Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}


#endif // EX7_11_H_INCLUDED
