/*�˳�����ʾ#include �����÷�
    ע�⣺�������ٶ���һ����Ϊmetric.h
    ���ļ��и����˶���                  */

#include <stdio.h>
#include "metric.h"

int main(void)
{
    float liters, gallons;

    printf("*** Liters to Gallons ***\n\n");
    printf("Enter the number of liters: ");
    scanf("%f", &liters);

    gallons = liters * QUARTS_PER_LITER / 4.0;
    printf("%g liters = %g gallons\n", liters, gallons);

    return 0;
}
/*  metric.h�е�����Ϊ��
#define INCHES_PER_CENTTMETER   0.394
#define CENTTMETERS_PER_INCH    1 / INCHES_PER_CENTTMETER

#define QUARTS_PER_LITER   		1.057
#define LITERS_PER_QUART		1 / QUARTS_PER_LITER

#define OUNCES_PER_GRAM			0.035
#define GRAMS_PER_OUNCE			1 / OUNCES_PER_GRAM
*/
