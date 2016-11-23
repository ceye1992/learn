#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using std::endl; using std::cout;
using std::cin; using std::vector;
using std::string;
int main()
{
    vector<string> vect;
    string word; //读入的数据流
    while(cin >> word)
        vect.push_back(word);

    for(auto &str : vect) //到每一个字符串
        for(auto &c : str)//到每一个字符
            c = toupper(c);
    for(decltype(vect.size()) i = 0; i != vect.size(); ++i)
        cout << vect[i]<<endl;

    return 0;
}
