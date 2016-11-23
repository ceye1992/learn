#include <fstream>
#include <string>
#include <map>
#include <iostream>
#include <sstream>
using std::runtime_error;
using std::istringstream;
using std::ifstream; using std::ofstream;
using std::cout; using std::cin; using std::endl;
using std::map; using std::string;
//进行转换
map<string, string> buildMap(ifstream &map_file)
{
    map<string, string> trans_map; //保留转换规则
    string key; //保留关键字
    string value; //替换后的内容

    while(map_file >> key && getline(map_file, value))
        if(value.size() > 1) //检查是否有转换规则
            trans_map[key] = value.substr(1); //跳过前导空格
        else
            throw runtime_error("no rule for " + value);
    return trans_map;
}

const string& transform(const string& s, const map<string, string>& m)
{
    //实际的转换工作
    auto map_it = m.find(s);
    if(map_it != m.end())
        return map_it->second;
    else
        return s;
}

void word_transform(ifstream& map_file, ifstream& input)
{
    auto trans_map = buildMap(map_file); //保留转换规则
    string text; //保存输入的每一行

    while(getline(input, text)){
        istringstream stream(text); //用来读取每一个单词
        string word;
        while(stream >> word){
                cout << transform(word, trans_map);
                cout << " "; //在单词间打印一个空格
        }
        cout << endl;
    }
}
int main()
{
    ifstream ifs_map("file1.txt"), ifs_content("file2.txt");
    if (ifs_map && ifs_content)
        word_transform(ifs_map, ifs_content);
    else
        std::cerr << "can't find the documents." << std::endl;
}



