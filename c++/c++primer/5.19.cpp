#include <iostream>
#include <string>
using std::endl; using std::cin; using std::cout;
using std::string;
int main()
{
    //��������string���������С���Ǹ�
    string rap;//ѭ������������
    do{
        cout <<"Enter two strings: "<<endl;
        string str1, str2;
        cin >> str1 >>str2;
        cout << (str1 > str2 ? str2 : str1) <<endl;
        cout <<"Enter yes to continue"<<endl;
        cin>> rap;
    }while(!rap.empty() && rap[0] == 'y');

    return 0;
}
