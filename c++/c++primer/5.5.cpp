#include <vector>
#include <string>
#include <iostream>
using std::cin; using std::endl; using std::cout;
using std::string; using std::vector;
int main()
{
    vector<string> scores = {"F", "D",  "C ", "B " , " A" };
    int grade = 0;//用来读入数据
    while(cin >> grade){
        if(grade < 60)
            cout << scores[0] << endl;
        else{
            cout << scores[(grade - 50)/ 10]<<endl;
        }
    }

    return 0;
}
