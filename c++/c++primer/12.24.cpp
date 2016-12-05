#include <string.h>
#include <iostream>
#include <string>


int main()
{
    std::cout << "How long do you wangt ?"<<std::endl;

    int size{0};
    std::cin >> size;

    char* input = new char[size+1]();


    std::cin.ignore();
    std::cout << "input the string: ";
    std::cin.get(input, size + 1);
    std::cout << input;
    delete[] input;
}
