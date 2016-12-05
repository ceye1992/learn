#include <memory>
#include <string>
#include <iostream>
#include <string.h>

int main()
{
    char* concatenate_string = new char[255]();

    strcat(concatenate_string, "hello");
    strcat(concatenate_string, "word");

    std::cout << concatenate_string << std::endl;

    std::string st1("hello"), st2("word");
    std::cout << st1+st2 << std::endl;

    delete [] concatenate_string;
    return 0;

}
