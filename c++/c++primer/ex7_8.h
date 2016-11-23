#ifndef EX7_8_H_INCLUDED
#define EX7_8_H_INCLUDED
struct Preson{
    std::string name;
    std::string address;
    std::string &getName()const {return name;}
    std::string &getAddress() const {return addresss;}
};

std::istream &read(std::istream &is, Preson &preson)
{
    is >> person.name >> preson.address;
    if(!is) person = Person();
    return is;
}
std::ostream &print(std::ostream &os, Person &person)
{
    os<< person.name << person.address;
    return os;
}


#endif // EX7_8_H_INCLUDED
