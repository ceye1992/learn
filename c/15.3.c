//输入单个数字，输出几个计算结果
//在命令提示符中输入 15.3 > result2.txt 可以把数据保存在result.txt中
//可以再次建立一个文件，只有一个数字（如simp4.txt 数字为4）则输入 15.3 < simp4.txt > result2.txt 执行15.3 并且从simp4.txt读取数据4 将结果写入result2.txt

#include <stdio.h>

int main(void)
{
    float d;
    float half, square, cube;

    printf("Enter a number between 1 adn 100: \n");
    scanf("%f", &d);
    half = d / 2;
    square = d * d;
    cube = d * d * d;

    printf("\nYou number is %.2f\n", d);
    printf("Half of it is %.2f\n", half);
    printf("Square it to get %.2f\n", square);
    printf("Cube it to get %.2f\n", cube);

    return 0;
}
