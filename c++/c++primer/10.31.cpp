#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <vector>

int main()
{
//ʹ������������sort��unique_copy�ӱ�׼�����ȡһ���������У��������򣬲������д�뵽��׼���
    std::istream_iterator<int> in(std::cin), eof;
    std::vector<int> vec;

    while(in != eof)
        vec.push_back(*in++);

    std::sort(vec.begin(), vec.end());
    std::unique_copy(vec.begin(), vec.end(),
                     std::ostream_iterator<int>(std::cout, " "));
    return 0;

}
