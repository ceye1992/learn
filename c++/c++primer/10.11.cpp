#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using std::cout; using std::endl; using std::string;
using std::vector; using std::unique;

void printl(vector<string> &vec)
{
    for(auto s : vec) cout << s << " ";
    cout <<endl;
}
void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());  //����˳������
    printl(words);
    auto end_unique = unique(words.begin(), words.end());//"�������ظ�����ز��ظ���Χĩβ�ĵ�����
    printl(words);
    words.erase(end_unique, words.end());

}
bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}
int main()
{
    vector<string> vec{"the", "quick", "red", "for", "jump", "over", "the", "slow", "red", "turtle"};

    printl(vec);

    elimDups(vec);
    printl(vec);
    stable_sort(vec.begin(), vec.end(), isShorter);
    printl(vec);
    return 0;
}
