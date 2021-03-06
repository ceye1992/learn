#ifndef EX7_21_H_INCLUDED
#define EX7_21_H_INCLUDED
class Sales_data{
    friend std::ostream &print(std::ostream &os, const Sales_data &item)
    friend std::istream& read(std::istream& is, Sales_data& item)
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
public:
    Sales_data() = default;
    Sales_data(const std::string& s) : bookNo(s) {};
    Sales_data(const std::string &s, unsigned n, double p):
                            bookNo(s), units_sold(n), revenue(p * n){};
    Sales_data(std::istream& is) { read(is, *this); };
    std::string isbn() const { return bookNo; };
    Sales_data &combine(const Sales_data &);
private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    };

//成员函数
Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}
//非成员函数
std::ostream &print(std::ostream &os, const Sales_data &item)
{
    os << item.bookNo << item.units_sold << item.revenue;
    return os;
}
std::istream& read(std::istream& is, Sales_data& item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}
Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}



#endif // EX7_21_H_INCLUDED
