#include <iostream>
#include <vector>
using std::endl; using std::cout; using std::cin;
using std::vector; using std::cerr;
int main()
{
    //读入一组数据，并且将相邻整数的和输出。然后将第一个与最后一个之和的输出。以此类推
    //输入一组数据，存入vector对象
    cout<<"Enter some numbers: " <<endl;
    vector<int> vec;//保存数字的vector
    int num; //保存输入的数据
    while(cin >> num)
        vec.push_back(num);
    if(vec.empty()){
        cerr<< "No numbers" << endl;
        return -1;
        }

    //将相邻的整数的和输出
    for(auto it = vec.begin(); it + 1 != vec.end(); ++it)
        cout << *it + *(it + 1) << " ";
    cout << endl;
    //将第一个和最后一个的和输出
    for(auto beg = vec.begin(), end = vec.end() - 1; beg <= end;
        ++beg, --end)
        cout << *beg + *end << " ";
    cout << endl;

    return 0;

}
