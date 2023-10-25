#include <stdio.h>
#include <stdlib.h>
#include "list.h"

node *make_list(node **head, int n)
{
    node *tmp, *new_node;
    // if (*head == NULL)
    //    return NULL;
    new_node = (node *)malloc(sizeof(node));
    if (new_node == NULL)
        return NULL;
    new_node->n = n;
    new_node->next = NULL;
    tmp = *head;
    if (*head == NULL)
        *head = new_node;
    else
    {
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = new_node;
    }

    return new_node;
}