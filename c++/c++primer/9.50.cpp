#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector; using std::string;

int sum_of_int(const vector<string> vec)
{
    int sum = 0;
    for(auto i : vec) sum +=std::stoi(i);
    return sum;
}

float sum_of_folat(const vector<string> vec)
{
    float sum = 0.0;
    for(auto f : vec) sum += std::stof(f);
    return sum
}
