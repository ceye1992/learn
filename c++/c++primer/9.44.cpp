#include <iostream>
#include <string>
using std::string;
using std::cout; using std::endl;
void exchange(string& s, const string& oldVal, const string& newVal)
{
    //使用下标和replace
    for(string::size_type i = 0; i != s.size(); ++i){
        if(string(i, i + oldVal.size()) == oldVal){
            s.replace(i, oldVal.size(), newVal);
            i += newVal.size() - 1;//继续下个查找
        }
    }
}
int main()
{
    string str{"To drive straight thru is a foolish, tho courageous act."};
    exchange(str, "tho", "though");
    exchange(str, "thru", "through");
    cout << str << endl;
}
