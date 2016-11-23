#include <vector>
#include <iostream>
using std::cin; using std::cout; using std::endl;
using std::vector; using std::begin;

int main()
{
    //用下标运算符，at，begin（），front（）来尝试一个空vector
    vector<int>vec;
    cout << vec[0]<<endl;
    cout << vec.at(0) <<endl;
    cout << *vec.begin() << endl;
    cout << vec.front() <<endl;
    return 0;
}
