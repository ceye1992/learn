#include <iostream>
#include <string>
using std::string;
using std::cin; using std::cout; using std::endl;

void exchange(string& s, const string& oldVal, const string& newVal)
{
    for(auto beg = s.begin() ; beg != s.end() - oldVal.size();){
         if (string{beg, beg + oldVal.size()} == oldVal) {
            beg = s.erase(beg, beg + oldVal.size()); //É¾³ý¾ÉµÄildVal
            beg = s.insert(beg, newVal.cbegin(), newVal.cend());
            return;
        }
        ++beg;
    }
}
