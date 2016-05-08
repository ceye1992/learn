//演示各种pringtf（）格式

#include <stdio.h>

int main(void)
{
    char             c = 'X';
    char             s[] = "abcdefghijklmnopqrstuvwxyz";
    int              i = 425;
    short int        j = 17;
    unsigned int     u = 0xf179u;
    long int         l = 75000l;
    long long int    L = 0x12345678ll;
    float            f = 12.978F;
    double           d = -97.4583;
    char             *cp = &c;
    int              *ip = &i;
    int              c1, c2;

    printf("Ltengers: \n");
    printf("%i %o %x %u\n", i, i, i, i);   //%i十进制 %o八进制 %x十六进制 %u无符号
    printf("%x %X %#x %#X\n", i, i, i, i);  //%X以大写字母A~F显示十六位  %#x在
    printf("%+i % i %07i %.7i\n", i, i, i, i); //%+强制显示符号（即使是正数） % i 在正数值之前加上前导空格，用来对齐可能为正数或者负数的数据
                                            //%07右对齐的方式，宽度七个字段，0表示前面补0 %.7显示的值最小为7位
    printf("%i %o %x %u\n",j, j, j, j);  //可以指定任意整数格式来显示short int的值
    printf("%i %o %x %u\n", u, u, u, u); //%i当u值超过了能够储存的最大正数值，会显示负数
    printf("%ld %lo %lx %lu\n", l, l, l, l ); //用l修饰符来表示long int
    printf("%lli %llo %llx %llu\n", L, L, L, L);//如何显示long long int

    printf("\nFloats and doubles:\n");
    printf("%f %e %g\n", f, f, f);  //%f和%g默认显示6位小数 一般情况下 %g是显示浮点数的最佳格式
    printf("%.2f %.2ef\n", f, f); //。2将f的显示限制为2为小数 ，能够自动对于值进行四舍五入
    printf("%.0f %.0e\n", f, f);  //%.0进制在%f格式中显示所有小数，包括小数点在内，值被自动四舍五入
    printf("%7.2f %7.2e\n", f, f); //%7.2在现实该数值时最少使用七列，精度为两位小数，在指定字段宽度时，将用右对齐
    printf("%f %e %g\n", d, d, d);
    printf("%.*f\n", 3, d); //要将d的值显示到三位小数，%之后的.表示以函数的下一个参数作为精度值
    printf("%*.*f\n", 8, 2, d); //显示字段宽度8和精度为2，负号和小数点也包含在字段宽度中

    printf("\nCharacters:\n");
    printf("%c\n", c);
    printf("%3c%3c\n", c, c); //显示两次，字段宽度为3
    printf("%x\n", c);//以十六进制显示c的值，

    printf("\nStrings: \n");
    printf("%s\n", s); //显示字符串
    printf("%.5s\n", s); //使用精度规格5，仅显示这个字符串的前五个字符
    printf("%30s\n", s); //字段宽度为30， 为右对齐的方式
    printf("%20.5s\n", s); //显示前五个字符，宽度为20
    printf("%-20.5s\n", s);//左对齐的方式显示前五个字符，宽度为20

    printf("\nPointers: \n");
    printf("%p %p\n\n", ip, cp); //%p用来显示指针的值，不同系统包含不同的值，因为可能包含了不同的地址

    printf("This%n is fun.%n\n", &c1, &c2);  //%n参数类型必须是指向int的指针，实际上是将它到目前已经
                                    //输出的字符数存储到由这个参数指向的整型变量中，第一个%n将数值4储存在整型变量储存在c1中
                                    //第二个将12储存在c2中
    printf("c1 = %i, c2 = %i\n", c1, c2);

    return 0;
}
