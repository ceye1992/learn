#include <vector>
#include <string>
#include <iostream>
using std::vector; using std::string;
using std::cin; using std::cout; using std::endl;

int main()
{
    //��һ��vector<char>��ʼ��string
    vector<char> vec{'h', 'e', 'l', 'l', 'o'};
    string str(vec.begin(), vec.end());

    cout << str << endl;
    return 0;
}
