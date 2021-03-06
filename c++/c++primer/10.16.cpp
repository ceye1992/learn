#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using std::cin; using std::cout; using std::endl;
using std::vector; using std::string; using std::sort;

void elimdups(vector<string> &s1) //按照字典排序，删除重复的字符
{
    sort(s1.begin(), s1.end());  //按照字典排序
    auto end_unique = unique(s1.begin(), s1.end()); //返回迭代器，最后一个没重复的字符
    s1.erase(end_unique, s1.end());
}

void biggise(vector<string> &words, std::size_t sz)
{
    elimdups(words);
    //按照长度大小再次排序，长度相同的维持字典序列
    std::stable_sort(words.begin(), words.end(),
                     [](string const& lhs, string const& rhs) {
                         return lhs.size() < rhs.size();
                     });
   //返回第一个长度不小于sz的参数
    auto wc = find_if(words.begin(), words.end(),
                      [sz](string const& s) { return s.size() >= sz; });
    //打印长度大于指定长度的单词
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
