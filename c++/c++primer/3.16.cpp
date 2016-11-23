#include <iostream>
#include <vector>
#include <string>
using std::endl; using std::cout;
using std::cin; using std::vector;
using std::string;
int main()
{
    vector<int> v1;
    cout <<"size " <<v1.size() <<" value ";
    for (auto i : v1)
        cout << i << ",";
    cout <<endl;

    vector<int> v2(10);
    cout <<"size " <<v2.size() <<" value ";
    for (auto i : v2)
        cout << i << ",";
    cout <<endl;

    vector<int> v3(10, 42);
    cout <<"size " <<v3.size() <<" value ";
    for (auto i : v3)
        cout << i << ",";
    cout <<endl;

    vector<int> v4{10};
    cout <<"size " <<v4.size() <<" value ";
    for (auto i : v4)
        cout << i << ",";
    cout <<endl;

    vector<int> v5{10, 42};
    cout <<"size " <<v5.size() <<" value ";
    for (auto i : v5)
        cout << i << ",";
    cout <<endl;

    vector<string> v6{10};
    cout <<"size " <<v6.size() <<" value ";
    for (auto i : v6)
        cout << i << ",";
    cout <<endl;

    vector<string> v7{10, "hi"};
    cout <<"size " <<v7.size() <<" value ";
    for (auto i : v7)
        cout << i << ",";
    cout <<endl;


    return 0;



}
