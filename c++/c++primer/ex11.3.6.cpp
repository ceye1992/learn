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
//����ת��
map<string, string> buildMap(ifstream &map_file)
{
    map<string, string> trans_map; //����ת������
    string key; //�����ؼ���
    string value; //�滻�������

    while(map_file >> key && getline(map_file, value))
        if(value.size() > 1) //����Ƿ���ת������
            trans_map[key] = value.substr(1); //����ǰ���ո�
        else
            throw runtime_error("no rule for " + value);
    return trans_map;
}

const string& transform(const string& s, const map<string, string>& m)
{
    //ʵ�ʵ�ת������
    auto map_it = m.find(s);
    if(map_it != m.end())
        return map_it->second;
    else
        return s;
}

void word_transform(ifstream& map_file, ifstream& input)
{
    auto trans_map = buildMap(map_file); //����ת������
    string text; //���������ÿһ��

    while(getline(input, text)){
        istringstream stream(text); //������ȡÿһ������
        string word;
        while(stream >> word){
                cout << transform(word, trans_map);
                cout << " "; //�ڵ��ʼ��ӡһ���ո�
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



