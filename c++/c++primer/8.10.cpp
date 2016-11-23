#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>

using std::vector; using std::ifstream; using std::ofstream;
using std::cin; using std::cout; using std::endl;
using std::stringstream; using std::string;

int main(int argc, char** argv)
{
    ifstream ifs(argv[1]);//����һ���ļ����ļ���
    vector<string> vec; //���������ļ��е���
    if(!ifs){//�ļ�����
        std::cerr <<"No data"<<endl;
        return -1;
    }
    string line;
    while(getline(ifs, line)){//������ȡ�ļ��е�ÿһ��
            vec.push_back(line);
    }//��ÿһ�ж�������vector��

    for(auto & s: vec){
        std::istringstream iss(s);
        string word;
        while(iss >> word)
            cout << word <<endl;
    }

    return 0;
}
