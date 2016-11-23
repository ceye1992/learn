#include <iostream>

int main()
{
    std::cout << "/*在双引号里面并没有用";
    std::cout << "*/";

    std::cout << /*"*/"在外面有用"/* */;
    std::cout << /* "*/" /* "/*" */;
    std::cout << std::endl;

    return 0;
}
