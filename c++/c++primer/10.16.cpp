#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using std::cin; using std::cout; using std::endl;
using std::vector; using std::string; using std::sort;

void elimdups(vector<string> &s1) //�����ֵ�����ɾ���ظ����ַ�
{
    sort(s1.begin(), s1.end());  //�����ֵ�����
    auto end_unique = unique(s1.begin(), s1.end()); //���ص����������һ��û�ظ����ַ�
    s1.erase(end_unique, s1.end());
}

void biggise(vector<string> &words, std::size_t sz)
{
    elimdups(words);
    //���ճ��ȴ�С�ٴ����򣬳�����ͬ��ά���ֵ�����
    std::stable_sort(words.begin(), words.end(),
                     [](string const& lhs, string const& rhs) {
                         return lhs.size() < rhs.size();
                     });
   //���ص�һ�����Ȳ�С��sz�Ĳ���
    auto wc = find_if(words.begin(), words.end(),
                      [sz](string const& s) { return s.size() >= sz; });
    //��ӡ���ȴ���ָ�����ȵĵ���
    for_each(wc, words.end(), [](const string& s) {cout << s << " ";});
    cout <<endl;

}
int main()
{
    std::vector<std::string> v{"1234", "1234", "1234", "hi~",
                               "alan", "alan", "cp"};
    std::cout << "ex10.16: ";
    biggise(v, 3);
    std::cout << std::endl;

    return 0;
}
