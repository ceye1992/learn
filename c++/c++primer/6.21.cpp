#include <iostream>
using std::cout; using std::cin; using std::endl;

//������������������һ����int�͵�ָ�룬һ����int���������ؽϴ���Ǹ�
int largeOne(const int n1, int *n2)
{
    return (n1 > *n2? n1 : *n2);
}

int main()
{
    int c = 6;
    cout << largeOne(7, &c) <<endl;
    return 0;
}
