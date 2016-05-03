//将一组特定位设定为一个特定值

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

    //首先应该把value2左移，到特定的位置
    value2 <<= (size - n);

    //对value2进行改造，使得他的其他位与value相同
    num1 = (*value << (size - n - count)) >> (size - n - count);        //value的最右边
    num2 = (*value >> (n + count)) << (n + count);      //value的最左边
    value2 = value2 | num1 | num2;

    *value = *value & value2;
}
