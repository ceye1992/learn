#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;
int main()
{
    cout<<"Enter some numbers:" <<endl;
    vector<int> vect;//��ʼһ���յ�vector
    int num; //�������������
    while(cin >> num)
        vect.push_back(num); //������vect��
     //���������������ĺ�
    for(decltype(vect.size()) n1 = 0; n1 != vect.size() - 1; ++n1 )
        cout << vect[n1] + vect[n1 + 1] << endl;

    for(decltype(vect.size()) n2 = 0; n2 < vect.size() / 2; ++n2)
        cout << vect[n2] + vect [(vect.size()-n2-1 )] <<endl;
    return 0;
}
