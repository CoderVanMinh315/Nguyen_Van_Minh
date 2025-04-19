#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct node {
    int value;
    struct node* previous_node;
} node_t;

typedef struct {
    node_t* last_node;
    int len;
} linked_list_t;

linked_list_t* Create();
int GetLen(linked_list_t* list);
void Add(linked_list_t* list, int value);
void Insert(linked_list_t* list, int value, int index);
void Remove(linked_list_t* list, int index);

#endif
