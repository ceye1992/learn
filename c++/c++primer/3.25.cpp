#include <iostream>
#include <vector>
using std::endl; using std::cin; using std::cout;
using std::vector;
int main()
{
    //ͳ�Ƴɼ��ֶ�
    vector<unsigned> scores(11, 0); //11���ֶΣ�ȫ����ʼ��Ϊ0

    unsigned grade;
    while(cin >> grade){
        if(grade <= 100)//ֻ������ȷ�ɼ�
            ++(* (scores.begin() + (grade / 10)));
    }
    for (auto score : scores)
        cout << score << " ";
    cout << endl;
    return 0;
}
