#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

int main()
{
    //使用流迭代器，sort和copy从标准输入读取一个整数序列，将其排序，并将结果写入到标准输出
    std::istream_iterator<int> in(std::cin), eof;
    std::vector<int> vec;

    while(in != eof)
        vec.push_back(*in++);
    std::sort(vec.begin(), vec.end());
    std::copy(vec.cbegin(), vec.cend(),
              std::ostream_iterator<int>(std::cout, " "));
    return 0;
}
