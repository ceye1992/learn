#include <string>
using std::string;
struct Person{
    string name;
    string address;
    string getname() const {return name;};
    string getaddress() const {return address;};
    };
