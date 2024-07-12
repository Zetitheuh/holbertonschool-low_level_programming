#include "dog.h"
#include <stdio.h>
/**
print_dog - Print all element of a dog
 @d: pointer to struct dog
 Return: void*/
void print_dog(struct dog *d)
{
    printf("%s\n", *d.name);
    printf("%f\n", *d.age);
    printf("%s\n", *d.owner);
}
