#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Print all elements of a dog
 * @d: pointer to struct dog
 * Return: void
 */

void print_dog(struct dog *d)
{
    if (d==NULL)
    {
        return;
    }
    if (d->name == NULL)
    {
        printf("(nil)\n");
    }
    printf("%s\n", d->name);
    if (d->age == NULL)
    {
        printf("(nil)\n");
    }
    printf("%f\n", d->age);
    if (d->owner == NULL)
    {
        printf("(nil)\n");
    }
    printf("%s\n", d->owner);
}
