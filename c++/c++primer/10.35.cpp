#include <vector>
#include <iterator>
#include <iostream>
#include <algorithm>
int main()
{
    std::vector<int>vec{1, 2, 3, 4, 5, 6, 7, 8, 9 };

    for(auto i = vec.end()-1; i != vec.begin(); i--)
        std::cout << *i <<" ";
    std::cout <<std::endl;
    return 0;
}
