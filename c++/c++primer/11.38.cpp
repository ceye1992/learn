#include <unordered_map>
#include <set>
#include <fstream>
#include <iostream>
#include <sstream>

using std::unordered_map; using std::set; using std::ifstream;
using std::cout; using std::cin; using std::endl;
using std::istringstream; using std::string;
//单词计数程序
void wordCounting()
{
    unordered_map<string, size_t> word_count;
    for(string word; cin >> word; ++word_count[word])
        ;
    for(const auto &s : word_count)
        cout << s.first <<" " <<" occurs " << s.second
            << (s.second >1 ? " times " : " time ") <<endl;
}

unordered_map<string, string> bulidMap(ifstream& map_file)
{
    unordered_map<string, string> trans_map;
    string key;
    string value;
    while(map_file >> key&& getline(map_file, value)){
        if(value.size()> 1)
            trans_map[key] = value.substr(1);
    }
    return trans_map;
}

const string& transform(const string& s, const unordered_map<string, string> m)
{
    auto map_it = m.find(s);
    if(map_it != m.end())
        return map_it->second;
    else
        return s;

}

void word_transform(ifstream& map_file, ifstream& input)
{
    auto trans_map = bulidMap(map_file);
    string text;

    while(getline(input, text)){
        istringstream stream(text);
        string word;
        while(stream >> word){
            cout << transform(word, trans_map);
            cout << " ";
        }
        cout <<endl;
    }
}

int main()
{
    wordCounting();

    ifstream ifs_map("file1.txt"), ifs_content("file2.txt");
    if (ifs_map && ifs_content)
        word_transform(ifs_map, ifs_content);
    else
        std::cerr << "can't find the documents." << std::endl;

}
