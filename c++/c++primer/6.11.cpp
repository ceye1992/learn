#include <iostream>
using std::endl; using std::cout; using std::cin;
void rest(int &ip)
{
    ip = 0;
}
int main()
{
    int i = 42;
    rest(i);
    cout << i << endl;
    return 0;
}
