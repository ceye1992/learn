#include <iostream>
using std::endl; using std::cout; using std::cin;
//交换两个int的指针
void exchange(int &n1, int &n2)
{
    int tem = n1;
    n1 = n2;
    n2 = tem;
}

int main()
{
    int i = 11, n = 55;
    int *left = &i;;
    int *right = &n;
    exchange(*left, *right);
    cout << *left << endl;
    cout << *right <<endl;
    return 0;
}
