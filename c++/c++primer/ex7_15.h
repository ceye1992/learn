#ifndef EX7_15_H_INCLUDED
#define EX7_15_H_INCLUDED
#include <string>
#include <iostream>
std::iostream &read (std::iostream &, Person&)
struct Person{
    Person() = default;
    Person(std::string &n, std::string &a): name(n), address(a){};
    Person(std::istream &is) {read (is, *this);};
    std::string getName()const{return name;};
    std::string getAddress()const {return address;};

    std::string name;
    std::string address;
};

std::istream &read(std::istream &is, Person &rhs)
{
    is >> rhs.name>>rhs.address;
    return is;
}
std::ostream &print(std::ostream &os, Person &rhs)
{
    os << rhs.name <<rhs.address;
    return os;
}



#endif // EX7_15_H_INCLUDED
