//双重链表，并且简单的输出所有的数据

#include <stdio.h>

struct entry
{
    struct entry *last;  //指向前一个
    int           date;  //储存数据
    struct entry *next;  //指向下一个
};

int main(void)
{
    struct entry n1, n2, n3, *listStart, *listEnd;

    listStart = &n1;  //表头

    n1.last = (struct entry *)0;;
    n1.date = 10;
    n1.next = &n2;

    n2.last = &n1;
    n2.date = 20;
    n2.next = &n3;

    n3.last = &n2;
    n3.date = 30;
    n3.next = (struct entry *)0;

    listEnd =&n3;  //表尾

    while(listStart != (struct entry *)0)   //正遍历整个链表
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
