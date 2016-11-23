#include <algorithm>
#include <vector>
#include <iostream>
using std::accumulate; using std::vector;
using std::cin; using std::endl; using std::cout;

int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << accumulate(vec.cbegin(), vec.cend(), 0) <<endl;
    return 0;
}
