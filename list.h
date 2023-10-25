#ifndef LISTS_H
#define LISTS_H
typedef struct node
{
    int n;
    struct node *next;
} node;
node *make_list(node **head, int n);
int print_list(node *head);
node *insert_beg(node **head, int data);
void free_list(node *head);
node *insert_end(node **head, int data);
node *insert_at(node **head, int data, int pos);
node *insert_after(node **head, int data, int pos);
void delete_at(node **head, int pos);
#endif