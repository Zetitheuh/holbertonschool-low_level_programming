/**
 * new_dog - Crée un nouveau chien
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Propriétaire du chien
 *
 * Description: Cette fonction crée une nouvelle structure dog, initialise
 * ses membres et retourne un pointeur vers elle.
 *
 * Return: Pointeur vers la nouvelle structure dog, ou NULL en cas d'échec.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d = malloc(sizeof(dog_t));
    if (d == NULL)
        return NULL;

    d->name = malloc(strlen(name) + 1);
    if (d->name == NULL) {
        free(d);
        return NULL;
    }
    strcpy(d->name, name);

    d->owner = malloc(strlen(owner) + 1);
    if (d->owner == NULL) {
        free(d->name);
        free(d);
        return NULL;
    }
    strcpy(d->owner, owner);

    d->age = age;

    return d;
}