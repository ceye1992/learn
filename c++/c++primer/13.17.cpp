#include <iostream>

class numbered{
public:
    numbered()
    {
    static int i = 0;
    mysn = i ++;
    }

    int mysn;
};

void f(numbered s)
{
    std::cout << s.mysn <<std::endl;
}

int main()
{
    numbered a, b = a, c = b;
    f(a);
    f(b);
    f(c);
}


