#include <iostream>

int main()
{
    int sum = 0, val = 50;
    //����50��100�ĺ�
    while( val <= 100 ){
        sum += val;
        ++val;
    }

    std::cout << "The sum of 50 to 100 inclusive is "
              << sum << std::endl;

    return 0;
}
