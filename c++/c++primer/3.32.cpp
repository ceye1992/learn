#include <iostream>
#include <vector>
#include <cctype>
using std::endl; using std::cout; using std::cin;
using std::vector;

int main()
{
    //��һ�����鿽������һ������
    //������������
    int ia[10];
    for(size_t i = 0; i < 10; ++i)
        ia[i] = i;
    //���鿽��
    int ib[10];
    for(size_t i = 0; i < 10; ++i)
        ib[i] = ia[i];
    //��ӡ����
    for(auto i : ia)
        cout << i << " ";
    cout << endl;
    for(auto i : ib)
        cout << i <<" ";
    cout << endl;

    //��vector����ʾ����
    vector<int> vec1(10);
    for (auto it = vec1.begin(); it != vec1.end(); ++it)
        *it = it - vec1.begin();
    //vector����
    vector<int> vec2(10);
    auto beg = vec1.begin();
    for(auto it = vec2.begin(); it != vec2.end(); ++it){
        *it = *beg;
        ++beg;
    }
    for(auto i : vec1)
        cout << i<<" ";
    cout << endl;
    for(auto i : vec2)
        cout << i << " ";
    cout << endl;


    return 0;
}
