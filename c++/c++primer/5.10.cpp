#include <vector>
#include <string>
#include <iostream>
using std::cin; using std::endl; using std::cout;
using std::string; using std::vector;
int main()
{
    int cnt = 0;//��������Ԫ����ĸ������
    string world; //������������
    while(cin >> world){
        for(auto ch : world)
        switch(ch){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'U':
            case 'u':
                ++cnt;
                break;
    }
    }
    cout << cnt << endl;
}
