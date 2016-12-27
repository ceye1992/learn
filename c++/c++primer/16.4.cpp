#include <iostream>
#include <iterator>
#include <vector>
#include <list>

template<typename Iterator, typename T>
Iterator find(const Iterator& begin, const Iterator& end, const T& element)
{
    for(Iterator beg = begin; beg != end; ++ beg){
        if(*beg == element)
        return beg;
    }
    return end;
}

int main(){
  int num[] = {1,2,3,4,5,6,7,8,9,10};
  std::vector<int> vint(std::begin(num), std::end(num));
  std::list<int> lint(std::begin(num), std::end(num));

  auto iit = find(vint.cbegin(), vint.cend(), 2);
  std::cout << *iit << std::endl;


  auto lit = find(lint.cbegin(), lint.cend(), 3);
  std::cout << *lit << std::endl;
}

