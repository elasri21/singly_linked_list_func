#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int print_list(node *head)
{
    node *tmp = head;
    int l = 0;
    if (head == NULL)
        printf("The list is empty\n");
    else
    {
        while (tmp != NULL)
        {
            if (tmp->next == NULL)
                printf("%d\n", tmp->n);
            else
                printf("%d -> ", tmp->n);
            tmp = tmp->next;
            l++;
        }
        printf("\n");
    }
    return l;
}