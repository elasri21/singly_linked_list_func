#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(void)
{
    node *head;
    head = NULL;
    make_list(&head, 1);
    insert_beg(&head, 0);
    insert_end(&head, 2);
    insert_at(&head, 22, 2);
    insert_after(&head, 33, 2); // 0 -> 22 -> 33 -> 1 -> 2
    print_list(head);
    delete_at(&head, 78);
    print_list(head);
    free_list(head);
    return 0;
}