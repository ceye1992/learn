#include <iostream>
template <typename T, unsigned M> T* begin(T (&arry)[M])
{
    return arry;
}

template <typename T, unsigned M> T* end(T (&arry)[M])
{
    return (arry + M);
}

int main(){
  int num[] = {1,2,3,4,5,6};
  std::cout <<" begin(num) "<<": val is " << *begin(num) << std::endl;
  std::cout << "end(num) - 1 "<<": val is " << *(end(num) - 1) << std::endl;
  std::cout << end(num) << std::endl; //将打印最后一个元素后面的的地址
}
