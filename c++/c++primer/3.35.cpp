#include <iostream>
using std::cout; using std::endl;
using std::begin; using std::end;
int main()
{
    //利用指针将数组中的元素设置为0
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ip = arr;
    for(ip; ip != end(arr); ++ip)
        *ip = 0;
    for(auto i : arr)
        cout << i <<" ";
    cout << endl;
    return 0;
}
