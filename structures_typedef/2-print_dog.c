#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Print all elements of a dog
 * @d: pointer to struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL || d->name[0] == '\0')
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age < 0)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL || d->owner[0] == '\0')
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return 0;
}