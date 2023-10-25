#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void free_list(node *head)
{
    node *tmp;
    while (head != NULL)
    {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}