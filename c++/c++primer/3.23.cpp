#include <iostream>
#include <string>
#include <vector>
using std::endl; using std::cin; using std::cout;
using std::string; using std::vector;
int main()
{
    //用迭代器将所有的元素变成原来的两倍
    vector<int> vect{1, 2, 3, 4, 5, 6, 7, 8 ,9, 10};
    //变成两倍
    for(auto it1 = vect.begin(); it1 != vect.end(); ++it1)
        *it1 = 2 * (*it1);
    //输出
    for(auto it2 = vect.cbegin(); it2 != vect.end(); ++it2)
        cout << *it2 <<endl;

    return 0;
}
