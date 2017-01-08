#include <iostream>
#include <vector>

template<typename T>
std::ostream& print(T const& t, std::ostream &os)
{
    for(auto curr = t.cbegin(); curr != t.cend(); ++curr)
        os << *curr << " ";
    return os;
}

int main()
{
    std::vector<int> v = { 1, 23, 6, 4, 5, 7, 4 };
    print(v, std::cout) << std::endl;
    return 0;
}
