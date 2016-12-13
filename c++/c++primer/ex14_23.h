#ifndef EX14_23_H_INCLUDED
#define EX14_23_H_INCLUDED

class StrBlobPtr{
public:
    StrBlobPtr() = default;
    StrBlobPtr(StrBlobPtr *p): pointer(p){}

    StrBlobPtr& operator*();
    StrBlobPtr* operator->();
private:
    StrBlobPtr* pointer = nullptr;
};

StrBlobPtr& StrBlobPtr::operator*()
{
    return *(this->pointer);
}

StrBlobPtr* StrBlobPtr::operator->()
{
    return & this->operator*();
}
#endif // EX14_23_H_INCLUDED
