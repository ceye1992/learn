//˫���������Ҽ򵥵�������е�����

#include <stdio.h>

struct entry
{
    struct entry *last;  //ָ��ǰһ��
    int           date;  //��������
    struct entry *next;  //ָ����һ��
};

int main(void)
{
    struct entry n1, n2, n3, *listStart, *listEnd;

    listStart = &n1;  //��ͷ

    n1.last = (struct entry *)0;;
    n1.date = 10;
    n1.next = &n2;

    n2.last = &n1;
    n2.date = 20;
    n2.next = &n3;

    n3.last = &n2;
    n3.date = 30;
    n3.next = (struct entry *)0;

    listEnd =&n3;  //��β

    while(listStart != (struct entry *)0)   //��������������
    {
        printf("%i  \n", listStart->date);
        listStart = listStart->next;
    }

    while(listEnd != (struct entry *)0)
    {
        printf("%i  \n", listEnd->date);
        listEnd = listEnd->last;
    }
    return 0;
}
