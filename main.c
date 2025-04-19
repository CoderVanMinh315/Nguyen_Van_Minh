#define _CRT_SERCURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include "Linked_List.h"
void main()
{
	linked_list_t* list = Create();

	Add(list, 1);
	Add(list, 2);
	Add(list, 3);
	Add(list, 4);
	Add(list, 5);

	printf("List length: %d\n", GetLen(list));

	Insert(list, 6, 2);
	printf("List length after insert: %d\n", GetLen(list));

	Remove(list, 3);
	printf("List length after remove: %d\n", GetLen(list));

	return 0;

}