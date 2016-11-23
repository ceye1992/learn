#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

int main()
{
    std::map<std::string, std::vector<std::string>> famls;

    std::string lastName, chldName;

    while ([&]() -> bool {
        std::cout << "Please enter last name:\n";

        return std::cin >> lastName && lastName != "@q";
    }())
    {
        std::cout << "PLZ Enter children's name:\n";
        while (std::cin >> chldName && chldName != "@q") {
            famls[lastName].push_back(chldName);
        }
    }
    for (auto e : famls) {
        std::cout << e.first << ":\n";
        for (auto c : e.second) std::cout << c << " ";
        std::cout << "\n";
    }

    return 0;
}
