#include <stdio.h>
#include <stdlib.h>
#include "Linked_List.h"

linked_list_t* Create() {
	linked_list_t* list = (linked_list_t*)malloc(sizeof(linked_list_t));
	list->last_node = NULL;
	list->len = 0;
	return list;
}

int GetLen(linked_list_t* list) {
	return list->len;
}

void Add(linked_list_t* list, int value) {
	node_t* new_node = (node_t*)malloc(sizeof(node_t));
	new_node->value = value;
	new_node->previous_node = list->last_node;
	list->last_node = new_node;
	list->len++;
}

void Insert(linked_list_t* list, int value, int index) {
	if (index < 0 || index > list->len) return;

	if (index == list->len) {
		Add(list, value);
		return;
	}

	node_t* current = list->last_node;
	for (int i = list->len - 1; i > index; i--) {
		current = current->previous_node;
	}

	node_t* new_node = (node_t*)malloc(sizeof(node_t));
	new_node->value = value;
	new_node->previous_node = current->previous_node;
	current->previous_node = new_node;
	list->len++;
}

void Remove(linked_list_t* list, int index) {
	if (index < 0 || index >= list->len) return;

	node_t* current = list->last_node;
	node_t* prev = NULL;

	for (int i = list->len - 1; i > index; i--) {
		prev = current;
		current = current->previous_node;
	}

	if (index == list->len - 1) {
		list->last_node = current->previous_node;
	}
	else if (prev != NULL) {
		prev->previous_node = current->previous_node;
	}

	free(current);
	list->len--;
}