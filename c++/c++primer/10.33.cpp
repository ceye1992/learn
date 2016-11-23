//������������������ һ�������ļ�����������ļ����ļ����������ļ������Ӧ����������

#include <fstream>
#include <iterator>
#include <algorithm>

int main(int argc, char** argv)
{
    if(argc != 4) return -1;

    std::ifstream ifs(argv[1]); //����������ļ�
    std::ofstream ofs_odd(argv[2]),ofs_even(argv[3]);//����������ļ�

    std::istream_iterator<int> in(ifs), in_eof;
    std::ostream_iterator<int> out_odd(ofs_odd, " "), out_even(ofs_even, "\n");

    std::for_each(in, in_eof, [&out_odd, &out_even](const int i){
                  return i % 2 == 0? out_even: out_odd; });

    return 0;


}
