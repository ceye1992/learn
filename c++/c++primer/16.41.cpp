#include <iostream>
#include <vector>
#include <string>

template <typename T>
auto sum(T lhs, T rhs) -> decltype(lhs + rhs)
{
    return lhs + rhs;
}
