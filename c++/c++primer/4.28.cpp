#include <iostream>
#include <vector>
#include <string>
using std::vector; using std::string;
using std::endl; using std::cout; using std::cin;
int main()
{
    cout << sizeof(int) <<endl;
    cout << sizeof(char) <<endl;
    vector<int> vec{1, 2, 3, 4, 5};
    cout <<sizeof(vec) <<endl;
    vector<int> vec2{1, 2, 3};
    cout <<sizeof(vec2) <<endl;

    return 0;

}
