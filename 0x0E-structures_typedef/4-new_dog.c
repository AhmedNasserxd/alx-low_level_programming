#include "dog.h"
#include <stdlib.h>

/**
*new_dog - to create a new dog
*@name: pointer to the name of dog
*@age: age of dog
*@owner: pointer to the owner of dog
*Return: pointer to the new dog.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
int name_length, owner_length, k;
char *copied_name, *copied_owner;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

for (name_length = 0; name[name_length] != '\0'; name_length++)
;
for (owner_length = 0; owner[owner_length] != '\0'; owner_length++)
;

copied_name = malloc(sizeof(char) * (name_length + 1));
if (copied_name == NULL)
{
free(new_dog);
return (NULL);
}

copied_owner = malloc(sizeof(char) * (owner_length + 1));
if (copied_owner == NULL)
{
free(copied_name);
free(new_dog);
return (NULL);
}

for (k = 0; k <= name_length; k++)
copied_name[k] = name[k];
for (k = 0; k <= owner_length; k++)
copied_owner[k] = owner[k];

new_dog->name = copied_name;
new_dog->age = age;
new_dog->owner = copied_owner;

return (new_dog);
}
