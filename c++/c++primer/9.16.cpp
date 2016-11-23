#include <iostream>
#include <list>
#include <vector>
using std::list;
using std::vector;
using std::cout; using std::cin; using std::endl;

int main()
{
    list<int> ils{1, 2, 3, 4, 5, 6};
    vector<int> vec{1, 2, 3, 5};
    vector<int> vec3;
    vec3.assign(ils.begin(), ils.end());

    if(vec < vec3)
        cout << "ils "<<endl;
    else
        cout <<"vec"<<endl;
    return 0;
}
