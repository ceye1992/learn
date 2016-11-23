#include <algorithm>
#include <list>
#include <string>
#include <iostream>
using std::endl; using std::cout; using std::cin;
using std::string; using std::list; using std::count;

int main()
{
    list<string> ils{"as", "as", "as", "er", "er" ,"er", "er"};
    cout << "The as has " << count(ils.begin(), ils.end(), "as") <<endl;
    cout <<"The er has " << count (ils.begin(), ils.end(), "er") <<endl;
    return 0;
}
