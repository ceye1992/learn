/*编写一个程序，逐行读入一个输入文件，
*将内容存入一个StrBlob中，
用一个StrBlobPtr打印出StrBlob中的每一个元素
*/

#include "ex12_19.h"
#include <fstream>
#include <iostream>
#include <string>


int main()
{
    std::ifstream ifs("word.txt");

    StrBlob blob;

    for(std::string str; std::getline(ifs, str);)blob.push_back(str);

    for(StrBlobPtr pbeg(blob.begin()), pend(blob.end()); pbeg != pend;pbeg.incr())
        std::cout << pbeg.deref() <<std::endl;
}
