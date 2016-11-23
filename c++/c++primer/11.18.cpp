#include <map>
#include <iterator>
#include <string>
#include <iostream>
int main()
{
    std::map<std::string, size_t> word_count;

    std::map<std::string, size_t>::const_iterator map_it = word_count.begin();

    std::cout << map_it->first;
    std::cout <<" " <<map_it->second;
    ++map_it;
}
