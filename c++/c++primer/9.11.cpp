#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
//六种不同方式创建vector的值
int main()
{
    vector<int> vec; //全部是0
    vector<int> vec1  {1, 2, 3, 4, 5, 6, 7, 8};//列表初始化
    vector<int> vec2 = vec1; //复制初始化
    vector<int> vec3 (10, 1);  //1
    vector<int> vec4(10); //0;
    vector<int> vec5(vec1.begin(), vec1.end());
}
