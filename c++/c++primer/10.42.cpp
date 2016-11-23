#include <list>
#include <algorithm>
#include <string>

void elimDups(std::list<std::string>& word)
{
    word.sort();
    word.unique();
}
