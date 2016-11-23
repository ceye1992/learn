#include <iostream>
#include <vector>
using std::endl;using std::cout; using std::cin;
using std::vector;
int main()
{
    //使用条件运算符从中找到奇数并将奇数值翻倍
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8};
    for(auto &i: vec)
        i = (i / 2) ? (i * 2) : i;
    for(auto i: vec)
        cout << i << endl;
    return 0;
}
