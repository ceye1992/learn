#include <iostream>
#include <string>
#include <stdexcept>
using std::endl; using std::cout; using std::cin;
using std::string; using std::runtime_error;
int main()
{
    //�ӱ�׼�����ж�ȡ���������������һ�������Եڶ������Ľ��
    int a, b;
    cin>>a >> b;
    //�ڶ�����Ϊ0ʱ���׳��쳣
    if(b == 0) throw runtime_error("divisor is 0");
    cout << a / b <<endl;
    return 0;
}
