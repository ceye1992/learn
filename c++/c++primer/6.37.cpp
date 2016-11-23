#include <string>
#include <iostream>
using std::string; using std::cin; using std::cout; using std::endl;
//返回类型为一个数组的引用，数组包含10个tring
string (& fuc(string (&arr)[10]))[10];

//使用using
using arrT = string [10];
arrT& fuc(arrT & arr);

//使用decltype
string arrs[10] = (10, "c");
decltype(arrs)& fuc(string (&arrs)[10]);

auto fuc(string (&arr)[10]) -> string (&) [10];

auto func2(arrT& arr) -> string(&)[10];



