#ifndef EX7_24_H_INCLUDED
#define EX7_24_H_INCLUDED
class Screan{
public:
    typedef std::string::size_type pos;

    Screan() = default; //¹¹Ôìº¯Êý 1
    Screan(pos ht, pos wd): hight(ht), width(wd), contents(ht*wd, ' '){} //2
    Screan(pos ht, pos wd, char c): hight(ht), width(wd), contents(ht * wd, c){} //3

    char get() const {return contents[cursor];
    char get(pos r, pos c) const {return contents[r*width + c];};

private:
    pos cursor = 0;
    pos hight = 0, width = 0;
    std::string contents;
};


#endif // EX7_24_H_INCLUDED
