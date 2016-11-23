#include <string>
#include <iostream>
using std::cin; using std::cout;using std::endl;
using std::string;
int main()
{
    string num{"0123456789"};
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string str{"ab2c3d7R4E6"};
    //查找每个数字的字符
    //使用find_first_of
    cout << "number: ";
    for(string::size_type pos = 0; (pos = str.find_first_of(num, pos)) != string::npos; ++pos){
        cout << str[pos]<< " ";
    }
    cout << endl;
    cout <<"alphabet ";
    for(string::size_type pos = 0; (pos = str.find_first_of(alphabet,pos)) != string::npos; ++pos){
        cout <<str[pos] <<" ";
    }
    cout <<endl;

        cout << "number: ";
    for(string::size_type pos = 0; (pos = str.find_first_not_of(num, pos)) != string::npos; ++pos){
        cout << str[pos]<< " ";
    }
    cout << endl;
    cout <<"alphabet ";
    for(string::size_type pos = 0; (pos = str.find_first_not_of(alphabet,pos)) != string::npos; ++pos){
        cout <<str[pos] <<" ";
    }
    cout <<endl;
}
