#include "lists.h"
/**
 * print_list - function
 * @h: parameter
 * Return: count
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h)
{
if (!h->str)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
h = h->next;
count++;
}
return (count);
}
