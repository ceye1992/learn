#include <vector>
#include <string>
#include <iostream>
using std::endl; using std::cout; using std::cin;
using std::string; using std::vector;
int main()
{
    //�ж�һ��vector�Ƿ�����һ����ǰ׺
    vector<int> vec1{1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> vec2{1, 2, 3};
    auto size = vec1.size() < vec2.size() ? vec1.size() : vec2.size();
    for(decltype(vec1.size())i = 0; i != size; ++ i)
        if(vec1[i] != vec2[i]){
            cout << "false" <<endl;
            return 0;
        }
    cout << "true" <<endl;
    return 0;
}
