#ifndef EX7_32_H_INCLUDED
#define EX7_32_H_INCLUDED
#include <vector>
#include <iostream>
#include <string>
class Screen; //Ç°ÏòÉùÃ÷

class Window_mgr{
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);
private:
    std::vector<Screen> screens{Screen(24, 80, ' ')};
};

class Screen{
    friend void clear(ScreenIndex)
public:
    using pos = std::string::size_type;

    Screen()= default;
    Screen(pos ht, pos wd):hight(ht), width(wd), contents(ht *wd , ' ') {}
    Screen(pos ht, pos wd, char c): hight(ht), width(wd), contents(ht*wd, c) {}

    char get() const {return contents[curosor];}
    char get(pos r, pos c) const {return contents[r *width + c];}
    inline Screen & move(pos r, pos c);
    inline Screen & set(char c);
    inline Screen & set(pos r, pos c, char ch);

    const Screen &display (std::ostream &os) const
    {
        do_display(os);
        return *this;
    }
    Screen &display(std::ostream &os)
    {
        do_display(os);
        return *this;
    }
private:
    void do_display(std::ostream &os) const {os << contents;}

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
}

inline void Window_mgr::clear(ScreenIndex i)
{
    if (i >= screens.size()) return; // judge for out_of_range.
    Screen& s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}

inline Screen& Screen::move(pos r, pos c)
{
    cursor = r * width + c;
    return *this;
}

inline Screen& Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen& Screen::set(pos r, pos c, char ch)
{
    contents[r * width + c] = ch;
    return *this;
}
#endif // EX7_32_H_INCLUDED
