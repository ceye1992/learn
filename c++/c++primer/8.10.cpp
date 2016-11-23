#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>

using std::vector; using std::ifstream; using std::ofstream;
using std::cin; using std::cout; using std::endl;
using std::stringstream; using std::string;

int main(int argc, char** argv)
{
    ifstream ifs(argv[1]);//来自一个文件的文件名
    vector<string> vec; //用来保存文件中的行
    if(!ifs){//文件出错
        std::cerr <<"No data"<<endl;
        return -1;
    }
    string line;
    while(getline(ifs, line)){//用来读取文件中的每一行
            vec.push_back(line);
    }//将每一行都保存在vector中

    for(auto & s: vec){
        std::istringstream iss(s);
        string word;
        while(iss >> word)
            cout << word <<endl;
    }

    return 0;
}
