/**
 * free_dog - Libère la mémoire allouée pour une structure dog
 * @d: Pointeur sur la structure dog à libérer
 *
 * Description: Cette fonction libère la mémoire allouée pour les membres
 * name et owner, puis pour la structure dog elle-même.
 */
void free_dog(dog_t *d)
{
    if (d != NULL) {
        free(d->name);
        free(d->owner);
        free(d->age);
        free(d);
    }
}