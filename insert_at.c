#include <stdio.h>
#include <stdlib.h>
#include "list.h"

node *insert_at(node **head, int data, int pos)
{
    node *new, *tmp;
    int length = 0, i = 1;
    new = (node *)malloc(sizeof(node));
    if (new == NULL || pos <= 0)
        return (NULL);
    new->n = data;
    new->next = NULL;
    if (*head == NULL)
        *head = new;
    else if (pos == 1)
    {
        insert_beg(head, data);
    }
    else
    {
        tmp = *head;
        while (tmp != NULL)
        {
            length++;
            tmp = tmp->next;
        }
        if (pos > length)
        {
            printf("Out of range\n");
            return (NULL);
        }
        else
        {
            tmp = *head;
            while (i < pos - 1)
            {
                tmp = tmp->next;
                i++;
            }
            new->next = tmp->next;
            tmp->next = new;
        }
    }
    return (new);
}