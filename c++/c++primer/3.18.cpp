#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using std::endl; using std::cout;
using std::cin; using std::vector;
using std::string;
int main()
{
    vector<int> vec1(10, 42);
    vector<int> vec2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> vec3{10};
    for(decltype(vec3.size()) i = 0; i != vec3.size(); ++i)
        vec3[i] = 42;
    vector<int> vec4;
    for(int i= 0; i < 10; ++i)
        vec4.push_back(42);

    return 0;
}
