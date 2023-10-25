#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void delete_at(node **head, int pos)
{
    node *tmp, *prev, *next;
    int length = 0, i = 1;
    if (*head == NULL || pos <= 0)
        return;
    if (pos == 1)
    {
        tmp = *head;
        *head = (*head)->next;
        tmp->next = NULL;
        free(tmp);
        return;
    }
    tmp = *head;
    while (tmp != NULL)
    {
        length++;
        tmp = tmp->next;
    }
    if (pos > length)
        printf("Out of range\n");
    return;
    tmp = *head;
    next = tmp->next;
    while (i < pos)
    {
        i++;
        prev = tmp;
        tmp = tmp->next;
        next = tmp->next;
    }
    prev->next = next;
    free(tmp);
}