#include <initializer_list>
#include <iostream>
using std::initializer_list; using std::end; using std::begin;
using std::cout; using std::endl; using std::cin;
int sum(initializer_list<int> il)
{
    int sum = 0;
    for(auto i: il) sum += i;
    return sum;
}

int main()
{
    cout << sum({1, 2, 3, 4, 5, 6, 7, 8, 9})<<endl;
    return 0;
}
