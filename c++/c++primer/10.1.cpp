#include <algorithm>
#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector; using std::count;
int main()
{
    vector<int>vec{1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5};
    auto beg = vec.begin();
    auto ed = vec.end();

    cout << "The 1 has " <<count(beg, ed, 1) <<endl;
    cout <<"The 2 has " <<count (beg, ed, 2) <<endl;
    return 0;
}
