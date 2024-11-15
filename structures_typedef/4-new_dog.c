#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - function that make new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int l_o;
	int l_n;
	int i = 0;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
	return (NULL);
	}
	while (name[l_n] != '\0') {
	l_n++;
	}
	new_dog->name = malloc(l_n + 1);
	if (new_dog->name == NULL)
	{
	free(new_dog);
	return (NULL);
	}
	while (i <= l_n) {
	new_dog->name[i] = name[i];
	i++;
	}
	while (owner[l_o] != '\0') {
	l_o++;
	}
	new_dog->owner = malloc(l_o + 1);
	if (new_dog->owner == NULL)
	{
	free(new_dog->name);
	free(new_dog);
	return (NULL);
	}
	i = 0;
	while (i <= l_o) {
	new_dog->owner[i] = owner[i];
	i++;
	}
	new_dog->age = age;
	return (new_dog);
	}
