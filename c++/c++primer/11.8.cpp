#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::vector<std::string> dict;
    for(std::string word; std::cin >> word;){
        if(std::find(dict.begin(), dict.end(), word) != dict.end())
            std::cout <<"Haven the word" <<std::endl;
        else
            dict.push_back(word);
    }
    for(auto s: dict)
        std::cout << s<<std::endl;
    return 0;

}
