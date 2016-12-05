/*��дһ���������ж���һ�������ļ���
*�����ݴ���һ��StrBlob�У�
��һ��StrBlobPtr��ӡ��StrBlob�е�ÿһ��Ԫ��
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
