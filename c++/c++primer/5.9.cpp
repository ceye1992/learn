#include <vector>
#include <string>
#include <iostream>
using std::cin; using std::endl; using std::cout;
using std::string; using std::vector;
int main()
{
    //使用if语句统计从cin输入的语句有多少个元音字符
    int cnt=0;//用来统计有多少个元音
    string world;//用来接受输入流
    while(cin >> world)
        for(auto s : world)
            if(s == 'a'|| s == 'o' || s == 'e' || s =='i' || s == 'u' )
                cnt += 1;
    cout << cnt << endl;
    return 0;
}
