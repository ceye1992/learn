#include <iostream>
#include <vector>
using std::endl; using std::cout; using std::cin;
using std::vector; using std::cerr;
int main()
{
    //����һ�����ݣ����ҽ����������ĺ������Ȼ�󽫵�һ�������һ��֮�͵�������Դ�����
    //����һ�����ݣ�����vector����
    cout<<"Enter some numbers: " <<endl;
    vector<int> vec;//�������ֵ�vector
    int num; //�������������
    while(cin >> num)
        vec.push_back(num);
    if(vec.empty()){
        cerr<< "No numbers" << endl;
        return -1;
        }

    //�����ڵ������ĺ����
    for(auto it = vec.begin(); it + 1 != vec.end(); ++it)
        cout << *it + *(it + 1) << " ";
    cout << endl;
    //����һ�������һ���ĺ����
    for(auto beg = vec.begin(), end = vec.end() - 1; beg <= end;
        ++beg, --end)
        cout << *beg + *end << " ";
    cout << endl;

    return 0;

}
