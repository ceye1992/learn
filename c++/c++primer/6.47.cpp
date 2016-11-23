#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;

void printVec(vector<int>& vec)
{
    #ifdef NOEBUG
    cout << "vector size: " << vec.size() <<endl;
    #endif // NOEBUG
    if(!vec.empty()) {
        auto tem = vec.back();
        vec.pop_back();
        printVec(vec);
        cout << tem <<" ";
    }
}
int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    printVec(vec);
    cout << endl;

    return 0;
}
