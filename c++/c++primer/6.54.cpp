#include <vector>
using std::vector;
//������������������int���ҷ�������Ҳ��int
int func(int a, int b);
using Pfunc = int (int a, int b);
//����һ��vector����Ԫ����ָ������ָ��
vector<Pfunc*> vec;

using Pfunc2 = int (*) (int a, int b);
vector<Pfunc2> vec2;

typedef decltype(func) *Pfunc3;
vector<Pfunc3> vec3;


