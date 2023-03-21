#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: struct dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, new_name, new_owner;
	dog_t *new_dog;

	new_dog = malloc(sizeof(*new_dog));
	if (new_dog == NULL || !(name) || !(owner))
	{
		free(new_dog);
		return (NULL);
	}

	new_name = 0;
	while (name[new_name])
	{
		;
		new_name++;
	}
	new_owner = 0;
	while (owner[new_owner])
	{
		;
		new_owner++;
        }

	new_dog->name = malloc(new_name + 1);
	new_dog->owner = malloc(new_owner + 1);

	if ((new_dog->name == NULL) || (new_dog->owner == NULL))
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	i = 0;
	while (i < new_name)
	{
		new_dog->name[i] = name[i];
		i++;
	}
	new_dog->name[i] = '\0';
	new_dog->age = age;
	i = 0;
	while (i < new_owner)
	{
		new_dog->owner[i] = owner[i];
		i++;
	}
	new_dog->owner[i] = '\0';

	return (new_dog);
}

