#include <vector>
#include <iterator>
#include <iostream>
#include <algorithm>
int main()
{
    std::vector<int>vec{1, 2, 3, 4, 5, 6, 7, 8, 9 };

    std::for_each(vec.rbegin(), vec.rend(), [](const int i){
                  std::cout << i << " ";});
    std::cout << std::endl;
    return 0;
}
