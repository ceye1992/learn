#include <iostream>
#include <string>
#include <vector>
using std::endl; using std::cin; using std::cout;
using std::string; using std::vector;
int main()
{
    //把vector的容量和具体内容输出出来
    vector<int> v1;
    cout << "The size of v1 is " << v1.size()<< " and the value is ";
    for(auto it1 = v1.cbegin(); it1 != v1.cend(); ++it1)
        cout << *it1 <<" ";
    cout << endl;

    vector<int> v2(10);
    cout << "The size of v1 is " << v2.size()<< " and the value is ";
    for(auto it2 = v2.cbegin(); it2 != v2.cend(); ++it2)
        cout << *it2 <<" ";
    cout << endl;

    vector<int> v3(10, 42);
    cout << "The size of v1 is " << v3.size()<< " and the value is ";
    for(auto it3 = v3.cbegin(); it3 != v3.cend(); ++it3)
        cout << *it3 <<" " ;
    cout << endl;

    vector<int> v4{10};
    cout << "The size of v1 is " << v4.size()<< " and the value is ";
    for(auto it4 = v4.cbegin(); it4 != v4.cend(); ++it4)
        cout << *it4 << " ";
    cout << endl;

    return 0;
}
