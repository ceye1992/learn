#include <iostream>
#include <vector>
#include <cctype>
using std::endl; using std::cout; using std::cin;
using std::vector;

int main()
{
    //将一个数组拷贝给另一个数组
    //被拷贝的数组
    int ia[10];
    for(size_t i = 0; i < 10; ++i)
        ia[i] = i;
    //数组拷贝
    int ib[10];
    for(size_t i = 0; i < 10; ++i)
        ib[i] = ia[i];
    //打印出来
    for(auto i : ia)
        cout << i << " ";
    cout << endl;
    for(auto i : ib)
        cout << i <<" ";
    cout << endl;

    //用vector来表示出来
    vector<int> vec1(10);
    for (auto it = vec1.begin(); it != vec1.end(); ++it)
        *it = it - vec1.begin();
    //vector拷贝
    vector<int> vec2(10);
    auto beg = vec1.begin();
    for(auto it = vec2.begin(); it != vec2.end(); ++it){
        *it = *beg;
        ++beg;
    }
    for(auto i : vec1)
        cout << i<<" ";
    cout << endl;
    for(auto i : vec2)
        cout << i << " ";
    cout << endl;


    return 0;
}
