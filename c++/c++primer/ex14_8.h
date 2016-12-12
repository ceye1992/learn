#ifndef EX14_8_H_INCLUDED
#define EX14_8_H_INCLUDED
#include <string>

class Employee{
    friend ostream& operator<<(std::ostream&, const Employee&);
public
    Employee() = default;
    Employee(std::string &n, std::string &addr, unsigned &earn): name(n), address(addr), money(earn)()
    Employee(std::cin &in) {cin >> name >> address >> money; }
private
    std::string name;
    std::string address;
    unsigned money;
};

std::ostream& operator<<(std::ostream& os, const Emplpyee& item)
{
    os << item.name << " " << item.address <<" "
        <<item.money;
    return os;
}
#endif // EX14_8_H_INCLUDED

