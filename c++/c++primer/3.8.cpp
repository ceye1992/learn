#include <iostream>
#include <string>
using std::endl;
using std::string;
using std::cin;
using std::cout;
int main()
{
    //ʹ�ô�ͳ��for�����������ַ����x
    cout << "Enter some words: "<<endl;
    string s;  //�������������
    cin >> s;
    for(std::string::size_type index = 0; index < s.size(); ++index)
        s[index] = 'X';

    cout << s <<endl;

    //ʹ��while
    cout <<"Enter some words: " <<endl;
    string c;
    cin >> c;
    decltype(c.size()) n = 0;
    while( n < c.size()){
        c[n] = 'Y';
        ++n;
    }
    cout << c<< endl;


    return 0;

}
