//��һ���ض�λ�趨Ϊһ���ض�ֵ

int int_size(void)
{
    unsigned int n = ~0;
    int count;

    while(n){
        ++count;
        n >>= 1;
    }
    return count;
}

void bitpat_set(unsigned int *value, unsigned int value2, int n, int count)
{
    int int_size(void);
    unsigned int num1, num2;
    int size = int_size();

    //����Ӧ�ð�value2���ƣ����ض���λ��
    value2 <<= (size - n);

    //��value2���и��죬ʹ����������λ��value��ͬ
    num1 = (*value << (size - n - count)) >> (size - n - count);        //value�����ұ�
    num2 = (*value >> (n + count)) << (n + count);      //value�������
    value2 = value2 | num1 | num2;

    *value = *value & value2;
}
