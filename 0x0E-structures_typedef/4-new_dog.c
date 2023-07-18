#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"dog.h"

/**
 * new_dog - new dog info
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to structure dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int l1, l2;
	dog_t *new_dog;

	l1 = strlen(name);
	l2 = strlen(owner);


	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * l1 + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * l2 + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
