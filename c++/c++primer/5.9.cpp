#include <vector>
#include <string>
#include <iostream>
using std::cin; using std::endl; using std::cout;
using std::string; using std::vector;
int main()
{
    //ʹ��if���ͳ�ƴ�cin���������ж��ٸ�Ԫ���ַ�
    int cnt=0;//����ͳ���ж��ٸ�Ԫ��
    string world;//��������������
    while(cin >> world)
        for(auto s : world)
            if(s == 'a'|| s == 'o' || s == 'e' || s =='i' || s == 'u' )
                cnt += 1;
    cout << cnt << endl;
    return 0;
}
