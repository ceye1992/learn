#include <iostream>
using std::cin; using std::cout; using std::endl;
int count_size()
{
    //ÿ�ε��÷���ֵ��1
    static int i = 0;
    return i++;
}

int main()
{
    for(int i = 10; i != 0; --i)
        cout <<count_size()<<endl;
    return 0;
}
