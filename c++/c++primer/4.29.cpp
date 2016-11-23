#include <iostream>
#include <vector>
#include <string>
using std::vector; using std::string;
using std::endl; using std::cout; using std::cin;
int main()
{
    int x[10]; int *p = x;
    cout <<sizeof(x)/sizeof(*x) <<endl;
    cout <<sizeof(p) / sizeof(*p) <<endl;
}
