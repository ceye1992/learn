#include <iostream>
using std::endl; using std::cin; using std::cout;
int main()
{
    //�ж϶���ĳɼ����ֳ�high pass, low pass, pass��fail����
    //ֻ�����������
    unsigned grade;
    while(cin >> grade)
        cout << ((grade > 90)? "high pass" : (grade > 75)
                                                ? "pass" : (grade > 60)
                                                                ? "low pass" : "fail")
                                                                                        <<endl;
    //ʹ��һ������if
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
