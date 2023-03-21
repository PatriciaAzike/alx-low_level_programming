#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free allocated memory
 * @d: pointer to struct
 * Return: no return (void)
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}

}
