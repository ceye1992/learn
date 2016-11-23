#include <iostream>
#include <string>
//此函数从给定流中读取数据
std::istream& fuc(std::istream& is)
{
    std::string buf;
    while(is >> buf)
        std::cout << buf << std::endl;
    is.clear();//将流中所有状态复位，使得流的状态为有效
    return is;
}
int main()
{
    std::istream & is = fuc(std::cin);
    std::cout << is.rdstate() <<std::endl;
    return 0;
}
