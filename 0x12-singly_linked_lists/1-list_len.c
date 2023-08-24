#include "lists.h"
#include <stdio.h>

/*
list_len - returns the number of elements in a list_t list
Return: the length of list_t
*/

size_t list_len(const list_t *h)
{
    size_t length = 0;

    while (h != NULL)
    {
        length++;
        h = h->next;
    }
    return length;
}