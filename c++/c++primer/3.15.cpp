#include <iostream>
#include <string>
#include <vector>
using std::endl; using std::cin; using std::cout; using std::vector;using std::string;
int main()
{
    //��ȡ�ַ������������Ǵ���vector
    string s1;
    vector<string> str;
    while(cin >> s1)
        str.push_back(s1);

    return 0;
}
