#include <iostream>
using std::endl; using std::cout; using std::cin;
//һ��������������׳�
int factor(int n)
{
    int ans = 1;
    while(n != 1)
        ans *= n--;
    return ans;
}
int main()
{
    //���û�����һ�����������Ľ׳�
    cout << "Enter one number: "<<endl;
    int i;//��������������
    cin >> i;
    cout << factor(i) << endl;
    return 0;
}
