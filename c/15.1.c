//��ʾ����pringtf������ʽ

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
    printf("%i %o %x %u\n", i, i, i, i);   //%iʮ���� %o�˽��� %xʮ������ %u�޷���
    printf("%x %X %#x %#X\n", i, i, i, i);  //%X�Դ�д��ĸA~F��ʾʮ��λ  %#x��
    printf("%+i % i %07i %.7i\n", i, i, i, i); //%+ǿ����ʾ���ţ���ʹ�������� % i ������ֵ֮ǰ����ǰ���ո������������Ϊ�������߸���������
                                            //%07�Ҷ���ķ�ʽ������߸��ֶΣ�0��ʾǰ�油0 %.7��ʾ��ֵ��СΪ7λ
    printf("%i %o %x %u\n",j, j, j, j);  //����ָ������������ʽ����ʾshort int��ֵ
    printf("%i %o %x %u\n", u, u, u, u); //%i��uֵ�������ܹ�������������ֵ������ʾ����
    printf("%ld %lo %lx %lu\n", l, l, l, l ); //��l���η�����ʾlong int
    printf("%lli %llo %llx %llu\n", L, L, L, L);//�����ʾlong long int

    printf("\nFloats and doubles:\n");
    printf("%f %e %g\n", f, f, f);  //%f��%gĬ����ʾ6λС�� һ������� %g����ʾ����������Ѹ�ʽ
    printf("%.2f %.2ef\n", f, f); //��2��f����ʾ����Ϊ2ΪС�� ���ܹ��Զ�����ֵ������������
    printf("%.0f %.0e\n", f, f);  //%.0������%f��ʽ����ʾ����С��������С�������ڣ�ֵ���Զ���������
    printf("%7.2f %7.2e\n", f, f); //%7.2����ʵ����ֵʱ����ʹ�����У�����Ϊ��λС������ָ���ֶο��ʱ�������Ҷ���
    printf("%f %e %g\n", d, d, d);
    printf("%.*f\n", 3, d); //Ҫ��d��ֵ��ʾ����λС����%֮���.��ʾ�Ժ�������һ��������Ϊ����ֵ
    printf("%*.*f\n", 8, 2, d); //��ʾ�ֶο��8�;���Ϊ2�����ź�С����Ҳ�������ֶο����

    printf("\nCharacters:\n");
    printf("%c\n", c);
    printf("%3c%3c\n", c, c); //��ʾ���Σ��ֶο��Ϊ3
    printf("%x\n", c);//��ʮ��������ʾc��ֵ��

    printf("\nStrings: \n");
    printf("%s\n", s); //��ʾ�ַ���
    printf("%.5s\n", s); //ʹ�þ��ȹ��5������ʾ����ַ�����ǰ����ַ�
    printf("%30s\n", s); //�ֶο��Ϊ30�� Ϊ�Ҷ���ķ�ʽ
    printf("%20.5s\n", s); //��ʾǰ����ַ������Ϊ20
    printf("%-20.5s\n", s);//�����ķ�ʽ��ʾǰ����ַ������Ϊ20

    printf("\nPointers: \n");
    printf("%p %p\n\n", ip, cp); //%p������ʾָ���ֵ����ͬϵͳ������ͬ��ֵ����Ϊ���ܰ����˲�ͬ�ĵ�ַ

    printf("This%n is fun.%n\n", &c1, &c2);  //%n�������ͱ�����ָ��int��ָ�룬ʵ�����ǽ�����Ŀǰ�Ѿ�
                                    //������ַ����洢�����������ָ������ͱ����У���һ��%n����ֵ4���������ͱ���������c1��
                                    //�ڶ�����12������c2��
    printf("c1 = %i, c2 = %i\n", c1, c2);

    return 0;
}
