#include <fstream>
#include <vector>
#include <string>
#include <iostream>

using std::vector; using std::string;
using std::cin; using std::cout; using std::endl;
using std::ifstream;

void ReadFileToVec(const string fileName, vector<string> vec)
{
    ifstream ism(fileName);
    if(ism){
        string buf;
        while(ism >> buf)
            vec.push_back(buf);
    }
}

int main()
{
    vector<string>vec;
    ReadFileToVec("../data/book.txt", vec);
    for(const auto& str: vec)
        cout << str <<endl;

    return 0;
}
