#include <map>
#include <string>
#include <algorithm>
#include <iostream>
using std::multimap; using std::string;
using std::cin; using std::cout; using std::endl;

int main()
{
    multimap<string, string> authors{
        {"alan", "DMA"}, {"pezy", "LeetCode"}, {"alan", "CLRS"},
        {"wang", "FTP"}, {"pezy", "CP5"},      {"wang", "CPP-Concurrency"}};

    string author = "pezy";
    string work = "CP5";
    auto found = authors.find(author);
    auto count = authors.count(author);

    while(count){
        if(found->second == work){
            authors.erase(found);
            break;
        }
        ++found;
        --count;
    }

    for(auto s : authors)
        cout << s.first << " " <<s.second <<endl;
    return 0;
}
