#include <string>
#include <iostream>
using std::string; using std::cin; using std::cout; using std::endl;
//返回类型为一个数组的引用，数组包含10个tring
string (&function (string (&array)[10]))[10];

