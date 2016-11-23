#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <vector>

int main()
{
//使用流迭代器，sort和unique_copy从标准输入读取一个整数序列，将其排序，并将结果写入到标准输出
    std::istream_iterator<int> in(std::cin), eof;
    std::vector<int> vec;

    while(in != eof)
        vec.push_back(*in++);

    std::sort(vec.begin(), vec.end());
    std::unique_copy(vec.begin(), vec.end(),
                     std::ostream_iterator<int>(std::cout, " "));
    return 0;

}
