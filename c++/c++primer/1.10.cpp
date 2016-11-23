#include <iostream>

int main()
{
    int val = 10;
    //按递减顺序打出10到0
    while(val >= 0){
        std::cout << val << std::endl;
        --val;
    }

    return 0;


}
