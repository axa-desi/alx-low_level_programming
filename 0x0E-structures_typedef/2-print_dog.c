#include "dog.h"
#include <stdio.h>

/**
 *priknt_dog - prints a struct dog
 *@d: pointer to strujct type dokg
 *
 *Return: No
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nill)\n");
		}
		printf("Age: %f\n", d->age);
		if (d->owner)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nill)\n");
		}
	}
}
