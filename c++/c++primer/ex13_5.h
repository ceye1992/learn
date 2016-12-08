#ifndef EX13_5_H_INCLUDED
#define EX13_5_H_INCLUDED

#include <string>
#include <algorithm>
class HasPtr{
public:
    HasPtr(const HasPtr& hp): ps(new std::string (*hp.ps)), i(hp.i) {}

    HasPtr(const std::string &s = std::string()):
        ps(new std::string(s)), i(0) {}
private:
    std::string *ps;
    int i;
};


#endif // EX13_5_H_INCLUDED
