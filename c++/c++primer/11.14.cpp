#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <utility>
using std::pair;
using std::ostream;
using std::string;
using std::vector; using std::map; using std::cin; using std::cout; using std::endl;
class families{
public:
    using Child = pair<string, string>;
    using Children = vector<Child>;
    using Data = map<string, Children>;

    void add(const string& lastName, const string & firstName, string birthday)
    {
        _data[lastName].push_back(make_pair(firstName, birthday));
    }
    ostream& print(std::ostream& os) const
    {
        if(_data.empty()) return os << "No data " <<endl;

        for ( auto& pair : _data) {
            os << pair.first << ":\n";
            for ( auto& child : pair.second)
                os << child.first << " " << child.second << endl;
            os << endl;
        }
        return os;
    }
private:
    Data _data;
};
