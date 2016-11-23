//函数接受三个参数， 一个输入文件和两个输出文件的文件名，输入文件保存的应该是整数，

#include <fstream>
#include <iterator>
#include <algorithm>

int main(int argc, char** argv)
{
    if(argc != 4) return -1;

    std::ifstream ifs(argv[1]); //用来输入的文件
    std::ofstream ofs_odd(argv[2]),ofs_even(argv[3]);//用来输出的文件

    std::istream_iterator<int> in(ifs), in_eof;
    std::ostream_iterator<int> out_odd(ofs_odd, " "), out_even(ofs_even, "\n");

    std::for_each(in, in_eof, [&out_odd, &out_even](const int i){
                  return i % 2 == 0? out_even: out_odd; });

    return 0;


}
