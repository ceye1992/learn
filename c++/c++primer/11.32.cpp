#include <map>
#include <string>
#include <algorithm>
#include <iostream>
#include <set>
using std::multimap; using std::string;
using std::cin; using std::cout; using std::endl;
using std::map; using std::multiset;
int main()
{
    multimap<string, string> authors{
        {"alan", "DMA"}, {"pezy", "LeetCode"}, {"alan", "CLRS"},
        {"wang", "FTP"}, {"pezy", "CP5"},      {"wang", "CPP-Concurrency"}};

    map<string, multiset<string>> order_authors;

    for (const auto& author : authors)
        order_authors[author.first].insert(author.second);
    for (const auto& author : order_authors) {
        cout << author.first << ": ";
        for (const auto& work : author.second)
            cout << work << " ";
        cout << endl;
    }
}
