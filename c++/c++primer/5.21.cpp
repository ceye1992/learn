#include <iostream>
#include <string>
using std::endl; using std::cin; using std::cout;
using std::string;
int main()
{
    //读入string对象直到连续出现两个相同的单词
    string world, memo;
    int i = 0;//记录是否有重复的出现
    while(cin >> world){//使用while循环一次读取一个值
        if(!isupper(world[0]))
            continue; //如果不是大写的话继续读入数据
        if(memo == world){
            cout << "The world " << world << " repeat " << endl;
            i += 1;
            break;//跳出while循环
        }
        else
            memo = world;
    }
    if(!i)
        cout <<"No world has repeat" <<endl;
    return 0;

}
