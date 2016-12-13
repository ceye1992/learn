#include <string>
#include <iostream>
#include <algorithm>
#include <fstream>

class SizeEqual
{
public:
    SizeEqual(std::size_t l = 0): siz(l){}
    bool operator()(const std::string& s)
    {
        return   s.length() == siz;
    }

private:
    std::size_t siz;
};


int main()
{
    std::ifstream fin("word.txt");
    std::size_t quantity8 = 0, quantity10 = 0;
    SizeEqual text8( 8);
    SizeEqual text10( 10);

    for(std::string word; fin>>word; ){
        if(text8(word)) ++quantity8;
        if(text10(word)) ++quantity10;
    }

    std::cout << quantity8 <<" " << quantity10 <<std::endl;

    return 0;
}
