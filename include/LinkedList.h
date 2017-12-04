#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* include the struct for a node in the header */

typedef struct node
{
    char data[10];
    struct node* next;
} node;

/* prototypes and variable declarations */

typedef void (*callback)(node* data);

node* create(char data[10],node* next);
node* prepend(node* head,char data[10]);
node* append(node* head, char data[10]);
node* insert_after(node *head, char data[10], node* prev);
node* insert_before(node *head, char data[10], node* nxt);
void traverse(node* head,callback f);
node* remove_front(node* head);
node* remove_back(node* head);
node* remove_any(node* head,node* nd);
void display(node* n);
node* search(node* head,char data[10]);
void dispose(node *head);
int count(node *head);
node* insertion_sort(node* head);
node* reverse(node* head);
void menu();