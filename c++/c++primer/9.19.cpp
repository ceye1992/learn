#include <list>
#include <iostream>
#include <string>
using std::list; using std::string;
using std::cin; using std::endl; using std::cout;

int main()
{
    list<string> ils;
    for(string word; cin >> word; ils.push_back(word))
        ;
    for(auto &s: ils)
        cout << s <<endl;
    return 0;
}
