#include <iostream>
#include <string>
using std::endl; using std::cin; using std::cout;
using std::string;
int main()
{
    //����string����ֱ����������������ͬ�ĵ���
    string world, memo;
    int i = 0;//��¼�Ƿ����ظ��ĳ���
    while(cin >> world){//ʹ��whileѭ��һ�ζ�ȡһ��ֵ
        if(!isupper(world[0]))
            continue; //������Ǵ�д�Ļ�������������
        if(memo == world){
            cout << "The world " << world << " repeat " << endl;
            i += 1;
            break;//����whileѭ��
        }
        else
            memo = world;
    }
    if(!i)
        cout <<"No world has repeat" <<endl;
    return 0;

}
