#ifndef 14_12_H_INCLUDED
#define 14_12_H_INCLUDED
#include <string>

class Employee{
    friend ostream& operator<<(std::ostream&, const Employee&);
    friend istream& operator>>(std::istream&, Employee&);
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

#endif // 14_12_H_INCLUDED
