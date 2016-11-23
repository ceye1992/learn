#ifndef EX7_53_H_INCLUDED
#define EX7_53_H_INCLUDED
class Debug{
public:
    constexpr Debug(bool b = true): hw(b), io(b), other(b) {}
    constexpr Debug(bool h, bool i, bool o):
                                    hw(h), io(i), other(o){}
    constexpr bool any() {return hw || io || other; }
    void set_io(bool b) {io = b;}
    void set_hw(bool b) {hw = b;}
    void set_other(bool b) {other = b;}
private:
    bool hw;  //Ó²¼þ´íÎó
    bool io;   //io´íÎó
    bool other; //ÆäËû´íÎó
}£»


#endif // EX7_53_H_INCLUDED
