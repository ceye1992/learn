#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <list>
using std::list;
using std::cout; using std::endl; using std::vector;

void print(const list<int>& seq)
{
    for (const auto& i : seq) std::cout << i << " ";
    std::cout << std::endl;
}

int main()
{
    vector<int>vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int>lst1, lst2, lst3;

   copy(vec.begin(), vec.end(), inserter(lst1, lst1.begin()));
    print(lst1);
    copy(vec.begin(), vec.end(), front_inserter(lst2));
    print(lst2);
    copy(vec.begin(), vec.end(), back_inserter(lst3));
    print(lst3);

    return 0;
}
