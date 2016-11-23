#include <set>
#include <string>
#include <iostream>

bool compareIsbn(const Sales_data &lhs, const Sales_data& rhs)
{
    return lhs.isbn() < rhs.isbn();
}

using compareType= bool (*) (const Sales_data &lhs, const Sales_data& rhs)

std::multiset<Sales_data, compareType> bookstore(compareIsbn);

std::multiset<Sales_data,compareType>::iterator it = bookstore.begin();
