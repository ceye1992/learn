#include <vector>
#include <iterator>
using std::vector;

bool find(vector<int>::iterator beg, vector<int>::iterator end, int val)//����һ����������һ��intֵ
{
    for(auto iter =beg; iter != end; ++iter)//����ҵ���������ͷ���true
        if(*iter == val) return true;
    return false;//���򷵻�false
}
