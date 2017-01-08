#include <iostream>
#include <vector>

template <typename T>
std::ostream& print(T const& t, std::ostream& os)
{
    for(typename T::size_type i = 0; i != t.size(); ++i)
        os << t[i]<<" ";
    return os;
}

