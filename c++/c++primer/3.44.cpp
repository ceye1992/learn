#include <iostream>
#include <vector>
using std::endl; using std::cout; using std::cin;
using std::vector; using std::begin; using std::end;
int main()
{
    //���ia��Ԫ��
    int ia[5][3] ={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {11, 12, 13}, {14,15, 16}};
    //ʹ�÷�Χfor
    //ʹ�����ͱ���
    using int_array = int[3];
    for(int_array &i : ia)
        for(int a : i)
            cout << a << " ";
    cout << endl;

    //ʹ��for�����±������
    for(size_t i = 0; i != 5; ++i)
        for(size_t a = 0; a != 3; ++ a)
            cout << ia[i][a]<<" ";
    cout << endl;

    //ʹ��for��ʹ��ָ��
    for(int (*p) [3] = ia; p != ia + 5; ++p)
        for(int *p2 = *p; p2 != *p + 3; ++p2)
            cout << *p2 << " ";
    cout << endl;

    return 0;
}
