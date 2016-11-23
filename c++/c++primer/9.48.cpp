#include <string>
#include <fstream>
#include <iostream>
using std::string; using std::ifstream;
using std::cin; using std::endl; using std::cout;

int main()
{
    ifstream ifs("../data/letter.txt");
    if(!ifs)return -1;
    string longst_word;
    for(string word; ifs >>word;)
        if(word.find_first_of("aceimnorsuvwxz") == string::npos && word.size() > longst_word.size())
            longst_word = word;

    cout << longst_word <<endl;
}
