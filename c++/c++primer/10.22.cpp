#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <functional>
using std::cin; using std::cout; using std::endl;
using std::vector; using std::string;
using namespace std::placeholders;

//ͳ�Ƴ���С�ڵ���6�ĵ�������
bool isShort(const string& word, size_t sz)
{
    return word.size() <= sz;
}
int main()
{
    vector<string>vec {"dasd", "dasfasf", "dasfasf", "adsa", "dsadasfas", "adsafasdqw"};

    cout << count_if(vec.begin(), vec.end(),  bind(isShort, _1, 6)) <<endl;
    return 0;
}
