#include <string>
#include <iostream>
using std::endl;
using std::string;
using std::cout;
using std::cin;

int main()
{
  /*  //��ȡ�ַ�������������������
    string s1, s2;
    while(cin >> s2)
        s1 += s2;
    cout << s1 << endl;
    */
    //��ȡ�ַ����������ÿո��������������
    string s3, s4;
    while(cin >> s4)
        s3 = s3 + " " + s4;
    cout << s3 <<endl;


    return 0;
}
