#ifndef EX7_27_H_INCLUDED
#define EX7_27_H_INCLUDED
#include <iostream>
#include <string>
class Screan{
public:
    typedef std::string::size_type pos;

    Screan() = default; //¹¹Ôìº¯Êý 1
    Screan(pos ht, pos wd): hight(ht), width(wd), contents(ht*wd, ' '){} //2
    Screan(pos ht, pos wd, char c): hight(ht), width(wd), contents(ht * wd, c){} //3

    char get() const {return contents[cursor];}
    char get(pos r, pos c) const {return contents[r * width + c];}
    inline Screan &move(pos r, pos c);
    inline Screan &set(char c);
    inline Screan &set(pos r, pos col, char ch);
    Screan& display(std::ostream &os) { do_display(os); return *this; }
    const Screan &display (std::ostream &os) const {do_display(os); return *this;}

private:
    void do_display(std::ostream &os) const {os << contents;}
    pos cursor = 0;
    pos hight = 0, width = 0;
    std::string contents;

};

inline Screan& Screan::move(pos r, pos c)
{
    cursor = r * width + c;
    return *this;
}
inline Screan& Screan::set(pos r, pos c, char ch)
{
    contents[r * width + c] = ch;
    return *this;
}
inline Screan & Screan::set(char c)
{
    contents[cursor] = c;
    return *this;
}


#endif // EX7_27_H_INCLUDED
