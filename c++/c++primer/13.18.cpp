#include <iostream>
#include <string>
using std::string;

class Employee{
public:
    Employee();
    Employee(const string &name);
    const int id()const {return id_;}

private:
    string name_;
    int id_;
    static int s_increme;
};

int Employee::s_increme = 0;

Employee::Employee()
{
    id_ = s_increme++;
}

Employee::Employee(const string &name)
{
    id_= s_increme++;
    name_ = name;
}
