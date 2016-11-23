#include <list>
#include <string>
#include <vector>
#include <iostream>

using std::cin; using std::cout; using std::endl;
using std::list; using std::vector; using std::string;

int main()
{
    list <int> ilst (5, 4);
    vector<int> ivec(5, 3);

    vector<double> dvc(ilst.begin(), ilst.end());
    for(auto a: ilst) cout << a<<endl;
    for(auto t: dvc) cout << t <<endl;

    vector<double> dvc2(ivec.begin(), ivec.end());
    for(auto a: ivec) cout << a <<endl;
    for(auto a: dvc2) cout <<a <<endl;

    return 0;
}
