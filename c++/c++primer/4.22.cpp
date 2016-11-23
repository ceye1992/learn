#include <iostream>
using std::endl; using std::cin; using std::cout;
int main()
{
    //判断读入的成绩划分成high pass, low pass, pass和fail四种
    //只用条件运算符
    unsigned grade;
    while(cin >> grade)
        cout << ((grade > 90)? "high pass" : (grade > 75)
                                                ? "pass" : (grade > 60)
                                                                ? "low pass" : "fail")
                                                                                        <<endl;
    //使用一个或多个if
    while(cin >> grade){
        if(grade > 90)
            cout << "high pass";
        else if(grade > 75)
            cout << "pass";
        else if(grade > 60)
            cout <<"low pass";
        else
            cout <<"fail";
        cout <<endl;
    }
    return 0;
}
