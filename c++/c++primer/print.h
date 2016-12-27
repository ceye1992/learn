#ifndef PRINT_H_INCLUDED
#define PRINT_H_INCLUDED
#include <iostream>

template <typename T,unsigned M> void print(T (&arry)[M])
{
    for(auto m: arry)
        std::cout << m <<std::endl;
}


#endif // PRINT_H_INCLUDED
