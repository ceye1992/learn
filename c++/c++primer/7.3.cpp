#include <string>
struct Sales_date{
    std::string bookNo;
    unsigned units_solds = 0;
    double revenue = 0.0;
    Sales_date &combine(const Sales_date &);
    std::string isbn() const { return bookNo; };
    };

Sales_date & Sales_date::combine (const Sales_date &rhs)
{
    units_solds += rhs.units_solds;
    revenue = rhs.revenue;
    return *this;
}
