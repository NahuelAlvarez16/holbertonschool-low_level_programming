#include <stdio.h>
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
	int i = 0;
	dog_t *dog_temp = malloc(sizeof(struct dog));
	if (dog_temp == NULL)
		return (NULL);
	for (; name[i]; i++)
		dog_temp->name[i] = name[i];
	dog_temp->name[i] = '\0';

	for (i = 0; owner[i]; i++)
		dog_temp->owner = owner;
	dog_temp->owner = '\0';
	dog_temp->age = age;
	return (dog_temp);
}
