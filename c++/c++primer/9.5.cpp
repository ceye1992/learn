#include <vector>
#include <iterator>
using std::vector;

vector<int>::iterator find(vector<int>::iterator beg, vector<int>::iterator end, int val)//接受一个迭代器和一个int值
{
    for(auto iter =beg; iter != end; ++iter)//如果找到了这个数
        if(*iter == val) return iter;//返回迭代器指定的元素
    return end;//否则返回容器eend
}
