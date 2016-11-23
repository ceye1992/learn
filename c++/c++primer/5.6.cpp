#include <vector>
#include <string>
#include <iostream>
using std::cin; using std::endl; using std::cout;
using std::string; using std::vector;
int main()
{
    //使用条件运算符重写5.5
    vector<string> scores{"F", "D", "C", "B", "A"};
    int grade;
    while(cin >> grade)
        grade < 60 ? cout << scores[0] <<endl : cout << scores[(grade - 50) / 10] <<endl;
    return 0;

}
