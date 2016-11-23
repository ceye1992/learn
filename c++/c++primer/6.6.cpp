#include <iostream>
using std::endl; using std::cout; using std::cin;
int exam(int n)
{
    static int m = 1; //局部静态变量
    int i = 2;//局部变量
    return n*i*m++;
}
int main()
{
    int i = 1;
    while(i!= 10){
        cout << exam(1) <<endl;
        ++i;
    }
    return 0;
}
