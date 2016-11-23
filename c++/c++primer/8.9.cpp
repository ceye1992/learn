#include <iostream>
#include <sstream>
using std::istream;
istream& fuc(istream &is)
{
    std::string buf;
    while(is >> buf)
        std::cout <<buf <<std::endl;
    is.clear();
    return is;
}

int main()
{
    std::istringstream iss("hello");
    fuc(iss);
    return 0;
}
