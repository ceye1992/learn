#ifndef CHAPTER6_H_INCLUDED
#define CHAPTER6_H_INCLUDED
int fact(int n)
{
    int ret =1;//����������
    while(n != 1)
        ret *= n--;
    return ret;
}
//һ��������������׳�
int factor(int n)
{
    int ans = 1;
    while(n != 1)
        ans *= n--;
    return ans;
}

//���һ�����ľ���ֵ
int abs(int n)
{
    return (n > n ? n :(- n));
}


#endif // CHAPTER6_H_INCLUDED
