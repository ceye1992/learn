#include <vector>
#include <iterator>
using std::vector;

vector<int>::iterator find(vector<int>::iterator beg, vector<int>::iterator end, int val)//����һ����������һ��intֵ
{
    for(auto iter =beg; iter != end; ++iter)//����ҵ��������
        if(*iter == val) return iter;//���ص�����ָ����Ԫ��
    return end;//���򷵻�����eend
}
