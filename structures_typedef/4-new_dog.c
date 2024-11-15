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
	char *name_again;
	char *owner_again;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
	return (NULL);
	}
	name_again = malloc(strlen(name) + 1);
	if (name_again == NULL)
	{
	free(new_dog);
	return (NULL);
	}
	strcpy(name_again, name);
	owner_again = malloc(strdup(owner) + 1);
	if (owner_again == NULL)
	{
	free(name_again);
	free(new_dog);
	return (NULL);
	}
	strcpy(owner_again, owner);
	new_dog->name = name_again;
	new_dog->age = age;
	new_dog->owner = owner_again;
	return (new_dog);
}
