#include <iostream>
#include <string>
#include <stdexcept>
using std::endl; using std::cout; using std::cin;
using std::string; using std::runtime_error;
int main()
{
    //从标准输入中读取两个整数，输出第一个数除以第二个数的结果
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
