#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
//���ֲ�ͬ��ʽ����vector��ֵ
int main()
{
    vector<int> vec; //ȫ����0
    vector<int> vec1  {1, 2, 3, 4, 5, 6, 7, 8};//�б��ʼ��
    vector<int> vec2 = vec1; //���Ƴ�ʼ��
    vector<int> vec3 (10, 1);  //1
    vector<int> vec4(10); //0;
    vector<int> vec5(vec1.begin(), vec1.end());
}
