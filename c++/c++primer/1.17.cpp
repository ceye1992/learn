#include <iostream>

int main()
{
    //currVal是我们正在统计的数；我们将读入的新值存入val
    int currVal = 0, val = 0;
    //读取第一个数，并确保确实有数据可以处理
    if (std::cin >> currVal){
        int cnt = 1; //保存我们正在处理的当前值的个数
        while (std::cin >> val) {  //读取剩余的数
            if (val == currVal) //如果值相同
                ++cnt;
            else {
                std::cout <<currVal <<" occurs "
                          << cnt << " times " <<std::endl;
                currVal = val;
                cnt = 1;
            }
        } //while循环结束

        std::cout << currVal << " occurs "
                  << cnt << " times " << std::endl;
    }

    return 0;
}
