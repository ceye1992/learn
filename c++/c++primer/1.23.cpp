#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;
    int count = 1;
    if(std::cin >>item1){
        while(std::cin >> item2)
            if(item1.isbn()== item2.isbn())
                ++count;
            else{
                std::cout << "The IBSN " << item1.isbn()
                        << " have " << count << " books " << std::endl;
                item1 = item2;
                count = 1;
            }
    }

    std::cout << "The IBSN " << item1.isbn()
               << " have " << count << " books " << std::endl;
    return 0;
}
