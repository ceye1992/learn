#include <iostream>
#include <string>
using std::string;
using std::cout; using std::cin; using std::endl;
//��������ʵ�β��Ұ�ʵ�ε��������ӳ�һ��string
int main(int arg, char * argv)
{
    string str;
    for(int i = 0; i != arg; ++i)
        str += argv[i];
    cout << str <<endl;
    return 0;
}
