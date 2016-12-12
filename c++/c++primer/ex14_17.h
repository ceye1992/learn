#ifndef EX14_17_H_INCLUDED
#define EX14_17_H_INCLUDED
#include <string>

class Employee{
    friend ostream& operator<<(std::ostream&, const Employee&);
    friend istream& operator>>(std::istream&, Employee&);
    friend bool operator==(const Employee&, const Employee&);
    friend bool operator!=(const Employee&, const Emplpyee&);
public
    Employee(): name(""), address(""), money(0){};
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

std::istream& operator>>(std::istream& is, Employee& item)
{
    is >>item.name >> item.address >>item.money;
    if(is)
        ;//输入正确，
    else
        item = Employee(); //输入失败，回复默认值
    return is;
}

bool operator==(const Employee& lhs, const Employee& rhs)
{
    return lhs.name == rhs.name &&
            lhs.address == rhs.address &&
            lhs.money == rhs.money;
}

bool operator!=(const Employee& lhs, const Emplpyee& rhs)
{
    return !lhs == rhs;
}

#endif // EX14_17_H_INCLUDED
