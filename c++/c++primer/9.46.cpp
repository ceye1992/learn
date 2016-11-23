#include <string>
#include <iostream>
using std::cin; using std::cout; using std::endl;
using std::string;

string change(string &name, const string& pro, const string& su)
{
    //只能使用insert用位置和长度来管理
    name.insert(0, pro);
    name.insert(name.size(), su);
    return name;
}

int main()
{
    string name{"Make"};
    string first{"Mr."};
    string TheEnd{"Jr."};
    cout << change(name, first, TheEnd)<<endl;
    return 0;
}
