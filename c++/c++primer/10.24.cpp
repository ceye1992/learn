#include <vector>
#include <iostream>
#include <string>
#include <functional>
#include <algorithm>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;
using namespace std::placeholders;
using std::find_if;

bool chick_size(const string& word, size_t sz)
{
    return word.size() > sz;
}

vector<int>::iterator find_first_big(const vector<int>vec, const string &s)
{
    return find_if(vec.cbegin(), vec.cend(),
                    bind(chick_size, s, _1));
}
//返回第一个大于string长度的值
int main()
{
    vector<int>vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << *find_first_big(vec, "hello") <<endl;
    return 0;
}
