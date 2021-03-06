#ifndef EX7_6_H_INCLUDED
#define EX7_6_H_INCLUDED
#include <string>
#include <iostream>
struct Sales_data{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    std::string const& isbn()const {return bookNo;};
    Sales_data &combine (const Sales_data &);
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

Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}


#endif // 7_6_H_INCLUDED
