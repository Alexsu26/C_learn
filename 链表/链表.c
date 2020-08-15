#include "node.h"
#include <stdio.h>
#include <stdlib.h>

// typedef struct _node
// {
//     int value;
//     struct _node *next;
// } Node;

int main(int argc, char const *argv[])
{
    Node *head = NULL;
    int number;
    do
    {
        scanf("%d",&number);
        if( number != -1)
        {
            //添加到链表
            Node *p = (Node*)malloc(sizeof(Node));
            p->value = number;
            p->next = NULL;
            //找到最后的指向
            Node *last = head;
            if( last )
            {
                while( last->next)
                {
                    last = last->next;
                }
                //链接
                last->next = p;
            }
            else
            {
                head = p;
            }
        }
    } while ( number != -1);
    
    return 0;
}
