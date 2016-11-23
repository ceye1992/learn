#include <list>
#include <deque>
#include <iostream>
using std::list; using std::deque;
using std::cin; using std::cout; using std::endl;
int main()
{
    list<int>ils{1, 2, 3, 4, 5, 6, 7, 8, 9};
    deque<int>odd, even;
    //如果是奇数保存在odd中，偶数保存在even中
    for(auto i: ils)
        ((i % 2) == 0? even : odd).push_back(i);

    for(auto i: even)
        cout << i <<" " ;
    cout << endl;
    for(auto i : odd)
        cout << i << " ";
    cout << endl;
    return 0;
}
