#include <iostream>
#include <string>
#include <map>
using std::map; using std::string;
using std::cin; using std::cout; using std::endl;

int main()
{
    map<string, size_t>word_count;
    string word;
    while(cin >> word){
        auto ret = word_count.insert({word, 1});
        if(!ret.second) ++ret.first->second;
    }

    for(auto& s : word_count)
        cout << s.first << " " << s.second
            << ((s.second > 1)? " times " : " time ") <<endl;
    return 0;
}
