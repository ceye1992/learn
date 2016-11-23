#include <iostream>
#include <vector>
using std::endl; using std::cin; using std::cout;
using std::vector; using std::begin; using std::end;
int main()
{
    //使用整型数组初始化一个vector
    int a1[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> vec (begin(a1), end(a1));
    for(auto s: vec)
        cout << s <<" ";
    cout << endl;
    return 0;
}
