#ifndef EX7_40_H_INCLUDED
#define EX7_40_H_INCLUDED
#include <string>
class Employee{
public
    Employee() = default;
    Employee(std::string &n, std::string &addr, unsigned &earn): name(n), address(addr), money(earn)()
    Employee(std::cin &in) {cin >> name >> address >> money; }
private
    std::string name;
    std::string address;
    unsigned money;
};


#endif // EX7_40_H_INCLUDED
