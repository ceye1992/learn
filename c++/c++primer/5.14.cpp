#include <vector>
#include <string>
#include <iostream>
using std::cin; using std::endl; using std::cout;
using std::string; using std::vector;
int main()
{
    //�������������ͬ�ĵ�������Ϊ�ظ�
    string world; //������������
    string memo, maxworld;//������������
    int num = 1; //�ظ�����
    int maxnum = 0; //�ظ��˼�������
    while(cin >> world){
        if(world == memo)
            ++num;
        else{
            memo = world;
            num = 1;
        }
        if(maxnum < num){
            maxnum = num;
            maxworld = world;
        }
    }
    if(maxnum == 1)
        cout <<"No world has been repeat"<<endl;
    else
        cout << "The world " << maxworld << " repeat " << maxnum <<" times "<<endl;

    return 0;
}


