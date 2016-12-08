#ifndef EX13_27_H_INCLUDED
#define EX13_27_H_INCLUDED

#include <string>

class HasPtr{
public:
    HasPtr(const std::string &s = std::string ()):
        ps(new std::string()), i(0), use(new std::size_t (1)) {}

    HasPtr(const HasPtr& p) ps(p.ps), i(p.i), use(new std::size_t(p.use)){++*use;}

    HasPtr operator=(const HasPtr &);

    ~HasPtr();
private:
    std::string * ps;
    int i;
    std::size_t *use
};


HasPtr HasPtr::operator=(const HasPtr& rhs)
{
    ++rhs.use;
    if(--*use == 0){
        delete ps;
        delete use;
    }
    ps = rhs.ps;
    i = rhs.i;
    use = rhs.use;
    return *this;
}
~HasPtr()
{
    if(--*use==0){
        delete ps;
        delete use;
    }
}
#endif // EX13_27_H_INCLUDED
