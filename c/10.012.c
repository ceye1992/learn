//判断一些调用输出是否有效

#include <stdio.h>

//定义
char *message = "programming in c is fun\n";  //一个message指针，指向字符串组
char message2[] = "You said it\n";  //一个字符串数组
char *format = "x = %i\n";  //一个指针，
int x = 100;

int main (void)
{
    printf("------第一组------------\n");
    printf("Programming in c is fun\n");    //直接引用字符串
    printf("%s", "programming in c is fun\n");      //把后面的看成一个字符串数组，然后前面引用
    printf("%s", message);                  //引用指针所储存的值
    printf(message);            //直接引用指针


    printf("------第二组-------------\n");
    printf("You said it\n");
    printf("%s", message2);
    printf(message2);               //引用数组
    printf("%s", &message2[0]);                 //不明白


    printf("------第三组--------------\n");
    printf("said it \n");
    printf(message2 + 4);    //从第四个元素开始输出
    printf("%s", message2+4);
    printf("%s", &message2[4]);

    printf("-------第四组-------------\n");
    printf("x = %i\n", x);
    printf(format, x);


    return 0;
}
