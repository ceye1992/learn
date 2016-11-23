#include <iostream>
#include <string>
#include "ex7_26.h"
#include <vector>
#include <algorithm>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

inline bool compareIsbn(const Sales_data& s1, const Sales_data &s2)
{
    return s1.isbn().size() < s2.isbn().size();
}

int main()
{
    Sales_data d1("aa"), d2("aaaa"), d3("aaa"), d4("z"), d5("aaaaz");
    vector<Sales_data> v{d1, d2, d3, d4, d5};

    sort(v.begin(), v.end(), compareIsbn);

    for (const auto& element : v) cout << element.isbn() << " ";
    cout << endl;

    return 0;
}
