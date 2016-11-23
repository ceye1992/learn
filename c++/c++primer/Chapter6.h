#ifndef CHAPTER6_H_INCLUDED
#define CHAPTER6_H_INCLUDED
int fact(int n)
{
    int ret =1;//用来保存结果
    while(n != 1)
        ret *= n--;
    return ret;
}
//一个函数用来计算阶乘
int factor(int n)
{
    int ans = 1;
    while(n != 1)
        ans *= n--;
    return ans;
}

//输出一个数的绝对值
int abs(int n)
{
    return (n > n ? n :(- n));
}


#endif // CHAPTER6_H_INCLUDED
