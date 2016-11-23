#include <vector>
#include <iostream>
#include <algorithm>
using std::fill_n; using std::cin; using std::cout; using std::endl;
using std::vector;

int main()
{
    vector<int> vec{1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    fill_n(vec.begin(), 10, 0);
    for(auto &s :vec) cout << s <<endl;
    return 0;
}
