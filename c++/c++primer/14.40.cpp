#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using std::vector;
using std::string;
using std::endl;
using std::cout;

class Stable_Sort{
public:
    bool operator()(const std::string &wz, const std::string &wl)
    {
        return wz.size() > wl.size();
    }
};

class Find_If{
public:
    Find_If(std::size_t l = 0): sz(l){}
    bool operator()(const std::string &s1)
    {
        return s1.size() >= sz;
    }
private:
    std::size_t sz;
};

class For_Each{
public:
    void operator()(std::string &s)
    {
         std::cout << s << " ";
    }
};

std::string make_plural(std::size_t ctr, std::string const& word, std::string const& ending)
{
    return (ctr > 1) ? word + ending : word;
}

void elimDups(vector<string>& words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

void biggies(vector<string>& words, vector<string>::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(), words.end(), Stable_Sort());
    auto wc = find_if(words.begin(), words.end(),Find_If(sz));
    auto count = words.end() - wc;
    cout << count << " " << make_plural(count, "word", "s") << " of length "
         << sz << " or longer" << endl;
    for_each(wc, words.end(), For_Each());
    cout << endl;
}

int main()
{
    vector<string> vec{"fox", "jumps", "over", "quick", "red",
                       "red", "slow",  "the",  "turtle"};
    biggies(vec, 4);
}
