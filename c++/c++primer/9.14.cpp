#include <list>
#include <iostream>
#include <vector>
#include <string>
using std::list; using std::vector;

int main()
{
    list<const char*> ils{"adasda", "sadasv", "adasdc", "sadasdae"};
    vector<std::string> vec;
    vec.assign(ils.begin(), ils.end());
    for(auto &s : vec)
        std::cout << s <<std::endl;
    return 0;
}
