#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the newly created dog_t structure.
 *         NULL if memory allocation fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	char *new_name, *new_owner;

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	new_name = malloc(strlen(name) + 1);
	new_owner = malloc(strlen(owner) + 1);

	if (new_name == NULL || new_owner == NULL)
	{
		free(new_dog_ptr);
		free(new_name);
		free(new_owner);
		return (NULL);
	}

	strcpy(new_name, name);
	strcpy(new_owner, owner);

	new_dog_ptr->name = new_name;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = new_owner;

	return (new_dog_ptr);
}
