#include <fstream>
#include <iostream>
#include <iterator>
#include <vector>
#include <string>
using std::vector; using std::string;

int main()
{
    std::fstream ifs("D:\\word.txt");
    std::istream_iterator<string> in(ifs), eof;
    vector<string> vec;
    std::copy(in, eof, back_inserter(vec));

    std::copy(vec.begin(), vec.end(),
              std::ostream_iterator<string>(std::cout, "\n"));
    return 0;
}
