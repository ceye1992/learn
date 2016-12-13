#include <string>
#include <iostream>
#include <algorithm>
#include <fstream>

class SizeEqual
{
public:
    SizeEqual(std::size_t l = 0, std::size_t u = 0): low(l), upper(u){}
    bool operator()(const std::string& s)
    {
        return low <= s.length() && s.length() <= upper;
    }

private:
    std::size_t low;
    std::size_t upper;
};


int main()
{
    std::ifstream fin("word.txt");
    std::size_t quantity9 = 0, quantity10 = 0;
    SizeEqual text9(1, 9);
    SizeEqual text10(1, 10);

    for(std::string word; fin>>word; ){
        if(text9(word)) ++quantity9;
        if(text10(word)) ++quantity10;
    }

    std::cout << quantity9 <<" " << quantity10 <<std::endl;

    return 0;
}
