#include <iostream>
#include <algorithm>
#include <vector>
using std::cin; using std::endl; using std::cout;
using std::vector; using std::accumulate;

int main()
{
    vector<double> vec{ 1.1, 2.1, 3.1, 4.1, 5.1};
    cout << accumulate(vec.cbegin(), vec.cend(), 0) <<endl;
    return 0;
}
