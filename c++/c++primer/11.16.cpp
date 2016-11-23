#include <map>
#include <string>

int main()
{
    std::map<int, std::string> mp;
    mp[25] = "alan";
    std::map<int, std::string>::iterator it= mp.begin();

    it->second = "kang";
    return 0;

}
