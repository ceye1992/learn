#include <iostream>
#include <cctype>
#include <string>
using std::endl;
using std::cout;
using std::cin;
using std::string;
int main()
{
    //����һ�����������ŵ��ַ����������������
    cout << "Enter some words: "<<endl;
    string str;
    cin >> str; //�������
    decltype(str.size()) index = 0; //�±�
    while(index < str.size()){
        if(!ispunct(str[index])){
            cout<<str[index] <<endl;
            ++index;
        }
        else
            ++index;
    }
    return 0;
}
