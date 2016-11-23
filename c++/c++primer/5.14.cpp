#include <vector>
#include <string>
#include <iostream>
using std::cin; using std::endl; using std::cout;
using std::string; using std::vector;
int main()
{
    //如果连续输入相同的单词则视为重复
    string world; //用来读入数据
    string memo, maxworld;//用来记忆数据
    int num = 1; //重复次数
    int maxnum = 0; //重复了几个数据
    while(cin >> world){
        if(world == memo)
            ++num;
        else{
            memo = world;
            num = 1;
        }
        if(maxnum < num){
            maxnum = num;
            maxworld = world;
        }
    }
    if(maxnum == 1)
        cout <<"No world has been repeat"<<endl;
    else
        cout << "The world " << maxworld << " repeat " << maxnum <<" times "<<endl;

    return 0;
}


