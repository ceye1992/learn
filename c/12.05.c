//����һ���� ����ƶ���Ϊ���������޷����������ƣ���Ϊ����������

#define SHIFT(x, n) ( ((n) > 0)? ((x) << (n)) \
                                : ((x) >> (n)))

int main(void)
{
    unsigned int w1 = 0177777u;

    printf("%o", SHIFT(w1, 5));

    return 0;
}
