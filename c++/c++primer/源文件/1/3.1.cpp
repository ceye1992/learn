#include <iostream>
using std::cin;
using std::cout; using std::endl;
int main()
{
    //使用while循环使得50到100相加
    int num = 50,sum = 0;
    while( num <= 100){
        sum += num;
        ++num;
    }
    cout << sum <<endl;

    //按照递减顺序打印出10 到0 之间的整数
    num = 10;
    while( num >= 0){
        cout << num << endl;
        --num;
    }

    //提示输入两个书，打印出指定范围
    cout << "Enter two numbers: "<<endl;
    int v1, v2;
    cin >> v1 >> v2;
    cout << "The sum of " << v1 << " and " << v2
        <<" is "<< v1 + v2 <<endl;


}
