#include <iostream>
using std::cin; using std::cout; using std::endl;
//���һ�����ľ���ֵ
int abs(int n)
{
    return (n > n ? n :(- n));
}
int main()
{
    cout <<"Enter one number : "<<endl;
    int i ; //����������
    cin >> i;
    cout << abs(i) <<endl;
    return 0;
}
