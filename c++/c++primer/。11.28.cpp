#inlcude <vector>
#include <string>
#include <map>
#include <algorithm>
using std::map; using std::vector;
using std::string;

int main()
{
    map<string, vector<int>> m;

    m= {{"Alan",
        {1, 2, 3, 4, 5}},
        {"Jhon",
        {1, 5, 6, 7, 8}}};

    map<string, vector<int>>::iterator it;
    it = m.find("Alan");

    return 0;
}
