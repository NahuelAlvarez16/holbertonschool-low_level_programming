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
	dog_t *dog_temp = malloc(sizeof(dog_t));

	if (dog_temp == NULL)
		return (NULL);

	dog_temp->name = malloc(strlen(name) + 1);
	if (dog_temp->name == NULL)
	{
		free(dog_temp);
		return (NULL);
	}
	dog_temp->owner = malloc(strlen(owner) + 1);
	if (dog_temp->owner == NULL)
	{
		free(dog_temp->name);
		free(dog_temp);
		return (NULL);
	}
	strcpy(dog_temp->name, name);
	strcpy(dog_temp->owner, owner);
	dog_temp->age = age;
	return (dog_temp);
}
