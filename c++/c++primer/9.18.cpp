#include <string>
#include <deque>
#include <iostream>
using std::string; using std::deque;
using std::cin; using std::cout; using std::endl;

int main()
{
    deque<string>deq;//接受从标准刘输入的数据
    string word; //用来暂时储存数据
    while(cin >> word)
        deq.push_back(word);

    //打印出值
    for(auto &s: deq)
        cout << s <<endl;
    return 0;

}
