#ifndef EX13_11_H_INCLUDED
#define EX13_11_H_INCLUDED

#include <string>
class HasPtr{
public:
    HasPtr(const HasPtr& hp) : ps(new std::string(*hp.ps)), i(hp.i) {}
    HasPtr& operator=(const HasPtr& hp)
    {
        std::string* new_ps = new std::string(*hp.ps);
        delete ps;
        ps = new_ps;
        i = hp.i;
        return *this;
    }
    ~HasPtr() {delete ps;}

private:
    std::string* ps;
    int i;
};


#endif // EX13_11_H_INCLUDED
