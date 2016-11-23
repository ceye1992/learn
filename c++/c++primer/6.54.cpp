#include <vector>
using std::vector;
//函数声明，接受两个int并且返回类型也是int
int func(int a, int b);
using Pfunc = int (int a, int b);
//声明一个vector。其元素是指向函数的指针
vector<Pfunc*> vec;

using Pfunc2 = int (*) (int a, int b);
vector<Pfunc2> vec2;

typedef decltype(func) *Pfunc3;
vector<Pfunc3> vec3;


