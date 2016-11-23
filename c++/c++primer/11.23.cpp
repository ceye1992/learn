#include <map>
#include <string>
#include <vector>
#include <iostream>
using std::cin; using std::cout; using std::endl;
using std::multimap; using std::vector; using std::string;

int main()
{
    multimap<string, string>family;
    for(string lastName, childName; cin >> childName >> lastName;
        family.emplace(lastName, childName))
        ;
    for(const auto s: family)
        cout << s.second << " " <<s.first <<endl;
    return 0;
}
