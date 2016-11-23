#include <vector>
#include <iterator>
using std::vector;

bool find(vector<int>::iterator beg, vector<int>::iterator end, int val)//接受一个迭代器和一个int值
{
    for(auto iter =beg; iter != end; ++iter)//如果找到了这个数就返回true
        if(*iter == val) return true;
    return false;//否则返回false
}
