#ifndef EX14_35_H_INCLUDED
#define EX14_35_H_INCLUDED

#include <string>
#include <iostream>

class GetInput{
public:
    GetInput(std::istream& i = std::cin ): is(i){}
    std::string operator()() const
    {
        std::string str;
        std::getline(is, str);
        return is ? str : std::string();
    }

private:
    std::istream& is;
};

#endif // EX14_35_H_INCLUDED
