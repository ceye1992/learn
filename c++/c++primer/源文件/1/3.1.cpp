#include <iostream>
using std::cin;
using std::cout; using std::endl;
int main()
{
    //ʹ��whileѭ��ʹ��50��100���
    int num = 50,sum = 0;
    while( num <= 100){
        sum += num;
        ++num;
    }
    cout << sum <<endl;

    //���յݼ�˳���ӡ��10 ��0 ֮�������
    num = 10;
    while( num >= 0){
        cout << num << endl;
        --num;
    }

    //��ʾ���������飬��ӡ��ָ����Χ
    cout << "Enter two numbers: "<<endl;
    int v1, v2;
    cin >> v1 >> v2;
    cout << "The sum of " << v1 << " and " << v2
        <<" is "<< v1 + v2 <<endl;


}
