#ifndef DOG_H_
#define DOG_H_

/**
*struct dog - structure program for dog
*@name: dog's name
*@age: dog's age
*@owner: dog's owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif