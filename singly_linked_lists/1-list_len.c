#include "lists.h"
/**
 * list_len - function
 * @h: parameter
 * Return: count
 */
size_t list_len(const list_t *h)
{
size_t count = 0;

while (h)
{
h = h->next;
count++;
}
return (count);
}
