//��һ������Ŀ���뵽һ�������У�����������ָ�룬һ��ָ��������б����һ��ָ���б��е�Ԫ�أ����뵽���Ԫ��֮��
//�����⣬������δ���Ŀ�꣬���ǻ��Ҳ�������������

#include <stdio.h>

struct entry
{
    int date;
    struct entry *next;
};

void insertEntry (struct entry *insert, struct entry *to)
{

    struct entry *temp;

    temp = *to;
    to = *insert;
    *insert = *temp;

}

int main(void)
{
    struct entry  n1, n2, n3, n4;

    struct entry *listStar = &n1;  //��ͷ

    n1.date = 10;
    n1.next= &n2;

    n2.date = 20;
    n2.next = &n3;

    n3.date = 30;
    n3.next = (struct entry *)0;  //��β

    n4.date = 50;


    insertEntry(n4.next, n2.next);
   // n4.next = n2.next;
    //n2.next = &n4;

    while(listStar != (struct entry *)0)
    {
        printf("%i\n", listStar->date);
        listStar = listStar->next;
    }


    return 0;
}
