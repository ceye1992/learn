#ifndef EX14_49_H_INCLUDED
#define EX14_49_H_INCLUDED
class Employee{
public
    Employee() = default;
    Employee(std::string &n, std::string &addr, unsigned &earn): name(n), address(addr), money(earn)()
    Employee(std::cin &in) {cin >> name >> address >> money; }
    operator bool()const {return money;}
private
    std::string name;
    std::string address;
    unsigned money;
};



#endif // EX14_49_H_INCLUDED
