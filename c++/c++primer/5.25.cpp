#include <iostream>
#include <string>
#include <stdexcept>
using std::endl; using std::cout; using std::cin;
using std::string; using std::runtime_error;
int main()
{
    //�ӱ�׼�����ж�ȡ���������������һ�������Եڶ������Ľ��
    int a, b;
    while(cin>>a >> b){
    try{
        if(b == 0) throw runtime_error("divisor is 0");
        cout << a / b <<endl;
        cout <<"Enter another two numbers : "<<endl;
    }
    catch(runtime_error err){
        cout <<err.what()
            <<"\nTry again? Enter y or n"<<endl;
            char c;
            cin >> c;
            if(! cin || c == 'n')
               break;
        }
    }
    return 0;
}
