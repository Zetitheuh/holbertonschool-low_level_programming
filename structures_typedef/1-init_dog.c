#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * init_dog - take data and initialise a structure dog with name/age/owner
 * @d: pointer to struct dog
 * @name: name of the dog
 * @age:  age of the dog
 * @owner: name of the owner
 * Description: take de caracteristiques of the dog then change it
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}