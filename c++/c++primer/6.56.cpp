#include <vector>
using std::vector;
//������������������int���ҷ�������Ҳ��int
int func(int a, int b);
using Pfunc = int (int a, int b);

int add(int a, int b){return a + b;};
int sub(int a, int b){return a - b;};
int divi(int a, int b){return a / b;};
int mul(int a, int b){return a * b;};


vector<decltype(func) *> vec{add, sub, mul, divi};
for (auto f : vec)
          std::cout << f(2, 2) << std::endl;
