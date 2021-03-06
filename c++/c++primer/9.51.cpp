#include <string>
#include <iostream>
#include <vector>
using std::string; using std::vector;
using std::cin; using std::cout; using std::endl;

class Data{
public:
    Data(const string&s);
    unsigned year;
    unsigned month;
    unsigned day;
};

Data::Data(const string& s)
{
    unsigned from = 0;
    //ȷ����ʽ
     // !1/1/1009
    if(s.find_first_of("/") != std::string::npos) from = 0x10;
    // !Jan 1, 1900
    if(s.find_first_of(",") >= 4 &&s.find_first_of(",") != std::string::npos) from = 0x01;

    switch(from){
    //! format = 1/1/1900
    case 0x10:
        day = std::stoi(s.substr(0, s.find_first_of("/")));
        month = std::stoi(s.substr(s.find_first_of("/") + 1,
                                   s.find_first_of("/") - s.find_last_of("/")));
        year = std::stoi(s.substr(s.find_last_of("/") + 1, 4));
        break;

    //! format = January 1, 1900  or Jan 1, 1900
    case 0x01:
        day = std::stoi(
            s.substr(s.find_first_of("1234567890"),
                     s.find_first_of(",") - s.find_first_of("1234567890")));

        if (s.find("Jan") < s.size()) month = 1;
        if (s.find("Feb") < s.size()) month = 2;
        if (s.find("Mar") < s.size()) month = 3;
        if (s.find("Apr") < s.size()) month = 4;
        if (s.find("May") < s.size()) month = 5;
        if (s.find("Jun") < s.size()) month = 6;
        if (s.find("Jul") < s.size()) month = 7;
        if (s.find("Aug") < s.size()) month = 8;
        if (s.find("Sep") < s.size()) month = 9;
        if (s.find("Oct") < s.size()) month = 10;
        if (s.find("Nov") < s.size()) month = 11;
        if (s.find("Dec") < s.size()) month = 12;

        year = std::stoi(s.substr(s.find_last_of(" ") + 1, 4));
        break;
    }
}
