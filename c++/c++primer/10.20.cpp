#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using std::cin; using std::endl; using std::cout;
using std::vector; using std::string;

//ͳ���ж��������ȴ���6�ĵ���
int main()
{
    vector<string>vec{"dajkd", "dasdasd", "ads", "das", "adsafasd", "dasfasfa"};

    for(auto&s : vec) cout << s << " ";
    cout <<endl;

    cout << count_if(vec.begin(), vec.end(), [](const string& word) {return word.size() > 6;}) <<endl;
    return 0;
}
