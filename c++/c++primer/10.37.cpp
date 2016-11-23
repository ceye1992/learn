#include <vector>
#include <iterator>
#include <iostream>
#include <list>
int main()
{
    std::vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    std::list<int>lst;

    std::copy(vec.crbegin() + 3, vec.crbegin() + 8, std::back_inserter(lst));

    for(auto i: lst)
        std::cout << i <<std::endl;
    std::cout << std::endl;
    return 0;
}
