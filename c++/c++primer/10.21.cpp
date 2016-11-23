#include <iostream>
#include <vector>
#include <algorithm>
using std::cin; using std::endl; using std::cout;
using std::vector;

int main()
{
    int v4 = 5;
    auto f2 =[&v4](){
        if(v4 == 0)
            return true;
        else{
            --v4;
            return false;
        }};
    while(!f2()) cout << v4 <<endl;
    return 0;
}
