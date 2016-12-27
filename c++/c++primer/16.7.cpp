#include <iostream>

template<typename T, unsigned M> unsigned cconstexpr(T (&array)[M])
{
    return M;
}

int main(){
  int num[] = {1,2,3,4,5,6,7,8};
  std::cout << c56constexpr(num) << std::endl;
}
