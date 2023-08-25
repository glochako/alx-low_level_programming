#include <stdio.h>
#include "lists.h"

/*
add_node - adds a new node at the betginning of a list_t list
@head: the current head of the node
@str: the string
Return: address of the new element
*/

list_t *add_node(list_t **head, const char *str)
{
   list_t * new;
   unsigned int len = 0;
   
   while (str[len])
   len++;

<<<<<<< HEAD
    
}
=======
   new = malloc(sizeof(list_t));

   if(new == NULL)
   {
   return (NULL);
   }
   
   new->str = strdup(str);
   new->len = len;
   new->next = (*head);
   (*head) = new;
   
   return (*head);
}
>>>>>>> 528419b533971670fc2d2c20c7a47f32bab85d1a
