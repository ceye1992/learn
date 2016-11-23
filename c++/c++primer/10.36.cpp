#include <iostream>
#include <algorithm>
#include <list>
#include <iterator>

int main()
{
    std::list<int> lst{1, 1, 3, 0, 5, 6, 7, 0, 9};

    auto it = std::find(lst.rbegin(), lst.rend(), 0);

    std::cout <<* it <<std::endl;
    return 0;
}
