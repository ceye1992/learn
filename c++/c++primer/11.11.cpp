#include <algorithm>
#include <iostream>
#include "ex7_26.h"
#include <set>

bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs)
{
    return lhs.isbn() > rhs.isbn();
}

int main()
{
    using compareType = bool (*)(const Sales_data &lhs, const Sales_data &rhs);

    std::multiset<Sales_data, compareType> bookstore(compareIsbn);

}
