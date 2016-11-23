#ifndef EX7_23_H_INCLUDED
#define EX7_23_H_INCLUDED
#include <string>
class Screan{
public:
    typedef std::string::size_type pos;

    Screan() = default; //¹¹Ôìº¯Êý
    Screan(pos ht, pos wd, char c): hight(ht), width(wd), contents(ht * wd, c){}
    char get() const {return contents[cursor];
    char get(pos r, pos c) const {return contents[r*width + c];};

private:
    pos cursor = 0;
    pos hight = 0, width = 0;
    std::string contents;
};


#endif // EX7_23_H_INCLUDED
