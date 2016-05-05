//判断表达式的类型和取值

#include <stdio.h>


int main(void)
{
    float f = 1.00;
    short int i = 100;
    long int l = 500l;
    double d = 15.00;

    printf("%f\n", f + i);  // float
    printf("%f\n", l / d);  // double
    printf("%f\n", i / l + f);  //float
    printf("%hi\n", i * i);     //short int
    printf("%f\n", f / 2);        //float
    printf("%f\n", i / (d + f));      //double
    printf("%f\n", l/(i * 2.0));      //dpuble
    printf("%f\n", l + i / (double) 1);   //double

    return 0;
}
