#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure représentant un chien
 * @name: Le nom du chien
 * @age: L'âge du chien
 * @owner: Le propriétaire du chien
 *
 * Description: Structure pour stocker des informations basiques sur un chien
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};
/** 
 * dog_t - nouveau type pour struct dog 
 */
typedef struct dog dog_t;
/**
 * init_dog - Initialise une structure dog
 * @d: Pointeur sur la structure dog à initialiser
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Propriétaire du chien
 *
 * Description: Cette fonction initialise les membres de la structure dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * print_dog - Affiche les informations d'une structure dog
 * @d: Pointeur sur la structure dog à afficher
 *
 * Description: Cette fonction affiche les informations contenues dans
 * la structure dog passée en paramètre.
 */
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */