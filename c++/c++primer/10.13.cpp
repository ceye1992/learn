#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

bool shortFive(const string &s)
{
    return s.size() < 5;
}

int main()
{
    vector<string> vec{"adsada", "adsa", "adsa", "adsadask", "adsdasfas", "das"};
    for(auto s : vec) cout << s << " ";
    cout << endl;

    auto end_partition = partition(vec.begin(), vec.end(), shortFive);

    while(end_partition != vec.end()){
        cout << *end_partition << " ";
        ++end_partition;
    }
    cout <<endl;
    return 0;
}
