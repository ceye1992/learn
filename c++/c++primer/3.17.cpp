#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using std::endl; using std::cout;
using std::cin; using std::vector;
using std::string;
int main()
{
    vector<string> vect;
    string word; //�����������
    while(cin >> word)
        vect.push_back(word);

    for(auto &str : vect) //��ÿһ���ַ���
        for(auto &c : str)//��ÿһ���ַ�
            c = toupper(c);
    for(decltype(vect.size()) i = 0; i != vect.size(); ++i)
        cout << vect[i]<<endl;

    return 0;
}
