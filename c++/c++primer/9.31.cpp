#include <list>
#include <iostream>
#include <forward_list>
using std::list; using std::forward_list;
using std::cin; using std::cout; using std::endl;

int main()
{
    list<int> v1 ={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = v1.begin();
    while(iter != v1.end()){
        if(*iter % 2){
            iter = v1.insert(iter, *iter);
            advance(iter, 2);
        }
        else
            iter = v1.erase(iter);
    }
    for(auto i : v1)
        cout << i <<endl;

    forward_list<int>flst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto pro = flst.before_begin();
    auto curr = flst.begin();
    while(curr != flst.end()){
        if(*curr % 2){
            curr = flst.insert_after(pro, *curr);
            advance(curr, 2);
            advance(pro, 2);
        }
        else{
            curr = flst.erase_after(pro);
        }
    }

    for(auto s : flst)
        cout << s <<endl;

    return 0;
}
