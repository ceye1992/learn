#include <string>
#include <iostream>
using std::string; using std::cin; using std::cout; using std::endl;
//��������Ϊһ����������ã��������10��tring
string (& fuc(string (&arr)[10]))[10];

//ʹ��using
using arrT = string [10];
arrT& fuc(arrT & arr);

//ʹ��decltype
string arrs[10] = (10, "c");
decltype(arrs)& fuc(string (&arrs)[10]);

auto fuc(string (&arr)[10]) -> string (&) [10];

auto func2(arrT& arr) -> string(&)[10];



