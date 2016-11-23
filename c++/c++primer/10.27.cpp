#include <iostream>
#include <list>
#include <iterator>
#include <list>
#include <algorithm>
using std::cin; using std::cout; using std::endl;
using std::list;

int main()
{
    list<int> vec{1, 1, 3, 3, 5, 5, 7, 7, 9};
    list<int> lst;

    std::unique_copy(vec.begin(), vec.end(), back_inserter(lst));

    for(auto i : lst) cout << i <<endl;
    return 0;
}
