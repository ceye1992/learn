#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

int main()
{
    //ʹ������������sort��copy�ӱ�׼�����ȡһ���������У��������򣬲������д�뵽��׼���
    std::istream_iterator<int> in(std::cin), eof;
    std::vector<int> vec;

    while(in != eof)
        vec.push_back(*in++);
    std::sort(vec.begin(), vec.end());
    std::copy(vec.cbegin(), vec.cend(),
              std::ostream_iterator<int>(std::cout, " "));
    return 0;
}
