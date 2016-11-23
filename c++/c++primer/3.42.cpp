#include <iostream>
#include <vector>
using std::endl; using std::cin; using std::cout;
using std::vector; using std::begin; using std::end;
int main()
{
    //将vector拷贝给数组
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr[8];
    int *a = arr;
    for(auto s : vec){
        *a = s;
        ++a;
    }
    for(auto a: arr)
        cout << a<<" ";
    cout << endl;
    return 0;
}
