#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <list>
#include <map>
int main()
{
    std::map<std::vector<int>::iterator, int>mv;

    std::map<std::list<int>::iterator, int>ml;

    std::vector<int> vi;
    mv.insert(std::pair<std::vector<int>::iterator, int>(vi.begin(), 0));
    std::list<int> li;
    ml.insert(std::pair<std::list<int>::iterator, int>(li.begin(), 0));

    return 0;
}
