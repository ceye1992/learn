#include <string>
#include <deque>
#include <iostream>
using std::string; using std::deque;
using std::cin; using std::cout; using std::endl;

int main()
{
    deque<string>deq;//���ܴӱ�׼�����������
    string word; //������ʱ��������
    while(cin >> word)
        deq.push_back(word);

    //��ӡ��ֵ
    for(auto &s: deq)
        cout << s <<endl;
    return 0;

}
