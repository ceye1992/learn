#include <forward_list>
#include <iostream>
using std::cout; using std::endl; using std::cin;
using std::forward_list;

int main()
{
    forward_list<int>flst{1, 2, 3, 4, 5,6 ,7, 8, 9,};

    auto pro = flst.before_begin();
    auto curr = flst.begin();
    while(curr != flst.end()){
        if(*curr % 2)
            curr = flst.erase_after(pro);
        else{
            pro = curr;
            ++ curr;
        }
    }
    for(auto s: flst)
        cout << s <<endl;
    return 0;


}
