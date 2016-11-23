#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string s1, s2;
    cout << "Enter two words: "<<endl;
    cin >> s1 >> s2;
    if(s1 >= s2)
        cout << s1 <<endl;
    else
        cout << s1 <<endl;
    if(s1.size() >= s2.size())
        cout << s1 <<endl;
    else
        cout << s2 <<endl;
    return 0;
}
