//删除链表中的一个项目

#include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
};

void removeEntry (struct entry *list, struct entry *reomve)
{
    remove = reomve->next;   //指针list指向的指针next赋值为remove的指向的指针
                                //也就是remove的指针指向remove的指针指向的指针

}

int main(void)
{
    struct entry n1, n2, n3, n4, *listStart;
    void romoveEntry(struct entry *list);

    listStart = &n1;

    n1.value = 10;
    n1.next = &n2;

    n2.value = 20;
    n2.next = &n3;

    n3.value = 30;
    n3.next = &n4;

    n4.value = 40;
    n4.next = (struct entry*)0;

    removeEntry(n1.next, n2.next);

    while( listStart != (struct entry*)0 )
    {
        printf("%i\n", listStart->value);
        listStart = listStart->next;
    }

    return 0;
}
