#include "list.h"
#include <stdio.h>
#include <stdlib.h>

node *insert_beg(node **head, int data)
{
    node *new;
    new = (node *)malloc(sizeof(node));
    if (new == NULL)
        return (NULL);
    new->n = data;
    if (*head == NULL)
    {
        new->next = NULL;
        *head = new;
    }
    else
    {
        new->next = *head;
        *head = new;
    }
    return (new);
}