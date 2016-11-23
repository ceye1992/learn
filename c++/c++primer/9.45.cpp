#include <string>
#include <iostream>
using std::cin; using std::endl; using std::cout;
using std::string;

string addSome(string& name, const string& pro, const string& su)
{
    auto beg = name.begin();
    name.insert(beg, pro.begin(), pro.end());
    name.append(su);
    return name;
}

int main()
{
    string name{"Make"};
    string first{"Mr."};
    string TheEnd{"Jr."};
    cout << addSome(name, first, TheEnd)<<endl;
    return 0;
}
