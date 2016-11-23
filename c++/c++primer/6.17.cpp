#include <iostream>
#include <string>
using std::string;
using std::cout; using std::cin; using std::endl;
bool isUppercase(const string &str)
{
    for(auto s : str)
        if(isupper(s))
            return true;
    return false;
}
string & makeUppercase(string &str)
{
    for(auto &c : str)
        if(isupper(c)) c = tolower(c);
    return str;
}
