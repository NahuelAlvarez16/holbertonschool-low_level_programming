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
	dog_t *dog_temp = malloc(sizeof(struct dog));
	if (dog_temp == NULL)
		return (NULL);
	dog_temp->name = &name;
	dog_temp->age = &age;
	dog_temp->owner = owner;
	return (dog_temp);
}
