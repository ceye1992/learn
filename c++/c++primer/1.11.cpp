#include <iostream>
//��ӡ���������������֮�����������

int main()
{
    int smaval = 0, bigval = 0;

    std::cout << "Enter two numbers(the big one and small one): " << std::endl;
    std::cin >> smaval >> bigval;

    while(bigval >= smaval){
        std::cout << smaval <<std::endl;
        ++smaval;
    }

    return 0;
}
