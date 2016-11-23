//使用引用类型交换两个数的值
void exchange(int &a, int &b)
{
    int tem = a;
    a = b;
    b = tem;
}
