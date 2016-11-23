#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl; using std::vector;
int main()
{
    //用cin读入一组整数并把他们存入vector
    vector<int> s1;
    int n;
    while(cin>>n)
        s1.push_back(n);
    return 0;
}
