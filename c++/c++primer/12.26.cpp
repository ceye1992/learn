#include <memory>
#include <string>
#include <iostream>

void input_string(int n)
{
    std::allocator<std::string> alloc;

    auto p = alloc.allocate(n);

    std::string s;

    auto q = p;

    while(std::cin >> s && q != p + n) alloc.construct(q++, s);

    while(q != p){
        std::cout << *--q <<" ";
        alloc.destroy(q);
    }

    alloc.deallocate(p, n);

}

int main()
{
    input_string(5);
}
