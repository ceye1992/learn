#include <functional>
#include <iostream>
#include <map>
#include <string>

int add(int a, int b)
{
    return a+b;
}

auto mod =[](int i, int j){return i % j;};

struct wy_div
{
    int operator()(int denominator, int divisor)
    {
        return denominator / divisor;
    }
};

std::map<std::string, std::function<int(int, int)>> binops ={
{"+", add},
{"%", mod},
{"/", wy_div()},
{"*", [](int i, int j){return i*j;}},
{"-", std::minus<int>()}
};

int main()
{
    while (true) {
        std::cout << "\npleasr enter: num operator num :\n";
        int n1, n2;
        std::string s;
        std::cin >> n1 >> s >> n2;

        std::cout << binops[s](n1, n2);
    }

    return 0;
}
