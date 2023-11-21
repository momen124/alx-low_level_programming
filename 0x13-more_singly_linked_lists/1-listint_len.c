#include "list.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listin_len print all the element in  a linked list 
 * @h:pointer to the list 
 * 
 * Return: the number in hte list 
*/


size_t listint_len(const listint_t *h)  
{
   size_t count = 0;   
   while (h !=NULL)
   {
     count++;
     h= h->next;
   }
   return count;
}