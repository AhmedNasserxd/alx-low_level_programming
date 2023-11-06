#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
*new_dog - to create a new dog
*@name: pointer to the name of dog
*@age: age of dog
*@owner: pointer to the owner of dog
*Return: pointer to the new dog.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
if (name == NULL || owner == NULL)
return (NULL);

dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

new_dog->name = strdup(name);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}

new_dog->owner = strdup(owner);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}

new_dog->age = age;

return (new_dog);
}
