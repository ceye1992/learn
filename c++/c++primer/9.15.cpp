#include <vector>
#include <iostream>
using std::cin; using std::cout; using std::endl;
using std::vector;

int main()
{
    //判断两个容器的大小
    vector<int>vec1{1, 2, 3, 4, 5};
    vector<int>vec2{2};
    if(vec1 > vec2)
        cout << "vec1 is big."<<endl;
    else
        cout << "vec2 is big "<<endl;
    return 0;
}
