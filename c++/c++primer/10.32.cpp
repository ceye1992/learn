#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include "Sales_item.h"

int main()
{
    std::vector<Sales_item> vec;
    std::istream_iterator<Sales_item> in_iter(std::cin), in_eof;

    while(in_iter != in_eof)
        vec.push_back(*in_iter++);

    std::sort(vec.begin(), vec.end(),
              [](Sales_item const& lhs, Sales_item const& rhs) {
              return lhs.isbn() == rhs.isbn();
              });

    for(auto beg= vec.begin(), end = beg; beg != vec.cend(); beg = end){
        end = find_if(beg, vec.cend(), [beg](const Sales_item& item){
            return item.isbn() != beg->isbn();
        });
        std::cout << std::accumulate(beg, end, Sales_item(beg->isbn()))
        std::endl;
    }

    return 0;
}
