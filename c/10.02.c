//将一个新项目插入到一个链表中，参数是两个指针，一个指向带插入列表项，另一个指向列表中的元素，插入到这个元素之后
//有问题，函数并未达成目标，但是还找不到问题在哪里

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

    struct entry *listStar = &n1;  //开头

    n1.date = 10;
    n1.next= &n2;

    n2.date = 20;
    n2.next = &n3;

    n3.date = 30;
    n3.next = (struct entry *)0;  //结尾

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
