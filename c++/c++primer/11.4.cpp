#include <iostream>
#include <map>
#include <string>
#include <cctype>
#include <algorithm>
void word_count(std::map<std::string, size_t>& m)
{
    std::string word;
    while(std::cin >> word){
        for(auto &a : word) a = tolower(a);
        word.erase(std::remove_if(word.begin(), word.end(), ispunct),word.end());
        ++m[word];
    }
     for (const auto& e : m) std::cout << e.first << " : " << e.second << "\n";
}
