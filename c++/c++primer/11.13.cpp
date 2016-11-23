#include <utility>
#include <string>
#include <vector>
#include <iostream>

int main()
{
    std::vector<std::pair<std::string, int>> vec;
    std::string str;
    int i;
    while(std::cin >> str >>i){
        vec.push_back(std::pair<std::string, int>(str, i));
        //vec.make_pair(str, i);
        //vec.push_back(str, i);
    }

    for(auto s: vec)
        std::cout << s.first <<" " <<s.second << std::endl;
    return 0;
}
