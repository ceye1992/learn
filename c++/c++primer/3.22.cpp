#include <iostream>
#include <string>
#include <vector>
using std::endl; using std::cin; using std::cout;
using std::string; using std::vector;
int main()
{
    //����text����
    vector<string> text;
    string word;
    cout << "Enter some words: "<<endl;
    while(cin >> word)
        text.push_back(word);

    //��Text�ĵ�һ��ȫ����д�ɴ�д
    for(auto it1 = text.begin(); it1 != text.end() && ! it1->empty(); ++ it1)
        for(auto &c : *it1)
            c = toupper(c);
    //���text
    for(auto it2 = text.cbegin(); it2 != text.cend() ; ++it2)
        cout << *it2 <<endl;

    return 0;
}
