#include "node.h"
#include <stdio.h>
#include <stdlib.h>

// typedef struct _node
// {
//     int value;
//     struct _node *next;
// } Node;

typedef struct _list
{
    Node *head;
} List;

void add(List *pList, int number);

void print(List *pList);

    int main(int argc, char const *argv[])
{
    Node *head = NULL;
    List list;
    list.head = NULL;
    int number;
    do
    {
        scanf("%d",&number);
        if( number != -1)
        {
            add(&list,number);
        }
    } while ( number != -1);

    //遍历
    print(&list);
    
    //搜索
    scanf("%d",&number);
    Node *p;
    int isFound = 0;
    for( p=list.head;p;p->next)
    {
        if( p->value == number)
        {
            printf("找到了\n");
            isFound = 1;
            break;
        }
    }
    if( !isFound )
    {    
        printf("没找到\n");
    }
    
    //删除
    Node *q;
    for ( q=NULL,p=list.head; p ; q=p,p=p->next)
    {
        if (p->value == number)
        {
            //p->name出现在=左边， 使用之前必须保证不为NULL
            if ( q )
            {
                q->next = p->next;
            }
            else{
                list.head = p->next;
            }
        }
        free(p);
        break;
    }
    
    //链表的清除
    for ( p=head; p ; p=q)
    {
        q = p->next;
        free(p);
    }
    
    return 0;
}

void add(List* pList, int number)
{
    //添加到链表
    Node *p = (Node *)malloc(sizeof(Node));
    p->value = number;
    p->next = NULL;
    //找到最后的指向
    Node *last = pList->head;
    if (last)
    {
        while (last->next)
        {
            last = last->next;
        }
        //链接
        last->next = p;
    }
    else
    {
        pList->head = p;
    }
}

void print(List *pList)
{
    Node *p;
    for (p = pList->head; p; p = p->next)
    {
        printf("%d\n", p->value);
    }
    printf("\n");
}