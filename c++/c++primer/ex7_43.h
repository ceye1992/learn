#ifndef EX7_43_H_INCLUDED
#define EX7_43_H_INCLUDED
//没有默认构造函数
class NoDefault{
public:
    NoDefault(int i) {}
};

//有默认构造函数
class C{
public:
    C(): def(0) {}//C的构造函数
private:
    NoDefault def;
};


#endif // EX7_43_H_INCLUDED
