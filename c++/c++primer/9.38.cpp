#include <vector>
#include <string>
#include <iostream>
using std::cin; using std::cout; using std::endl;
using std::vector; using std::string;

int main()
{
    //������size��capacive����α仯��
    vector<int>vec(10, 8);
    cout << vec.capacity() << endl;
    cout << vec.size() <<endl;

    int n;
    while(cin >> n){
        vec.push_back(n);
        cout << vec.capacity() << endl;
        cout << vec.size() <<endl;
    }

    return 0;
}
