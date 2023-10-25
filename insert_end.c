#include "list.h"
#include <stdio.h>
#include <stdlib.h>

node *insert_end(node **head, int data)
{
    node *new, *tmp;
    new = (node *)malloc(sizeof(node));
    if (new == NULL)
        return (NULL);
    new->n = data;
    new->next = NULL;
    if (*head == NULL)
        *head = new;
    else
    {
        tmp = *head;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = new;
    }
    return (new);
}