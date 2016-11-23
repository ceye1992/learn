#ifndef EX7_31_H_INCLUDED
#define EX7_31_H_INCLUDED
class Y;

class X{
    Y *y = nullptr;
};

class Y{
    X x;
};


#endif // EX7_31_H_INCLUDED
