#include <iostream>
#include <vector>
using std::endl; using std::cin; using std::cout;
using std::vector;
int main()
{
    //统计成绩分段
    vector<unsigned> scores(11, 0); //11个分段，全部初始化为0

    unsigned grade;
    while(cin >> grade){
        if(grade <= 100)//只处理正确成绩
            ++(* (scores.begin() + (grade / 10)));
    }
    for (auto score : scores)
        cout << score << " ";
    cout << endl;
    return 0;
}
