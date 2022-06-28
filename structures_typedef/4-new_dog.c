#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - initialize a variable of type struct dog_t
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 * Return: return a dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_temp = malloc(sizeof(struct dog));

	if (dog_temp == NULL)
		return (NULL);
	dog_temp->name = malloc(strlen(name));
	if (dog_temp->name == NULL)
		return (NULL);
	dog_temp->owner = malloc(strlen(owner));
	if (dog_temp->owner == NULL)
		return (NULL);
	strcpy(dog_temp->name, name);
	strcpy(dog_temp->owner, owner);
	dog_temp->age = age;
	return (dog_temp);
}
