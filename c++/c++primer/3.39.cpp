#include <iostream>
#include <string>
#include <cstring>
using std::endl; using std::endl; using std::cout;
using std::string;
int main()
{
    //�Ƚ�����string����
    string s1 = "Hello world";
    string s2 = "hello ";
    if(s1 == s2)
        cout <<"The s1 is equal s2"<<endl;
    if( s1 < s2)
        cout <<"The s2 is big"<<endl;
    else
        cout <<"The s2 is small"<<endl;

    //�Ƚ�����c����ַ���������
    const char c1[] = "Hello world";
    const char c2[] = "hello";
    if(strcmp(c1, c2) < 0)
        cout <<"The c2 is big"<<endl;
    else
        cout <<"The c2 is small"<<endl;

    return 0;
}
