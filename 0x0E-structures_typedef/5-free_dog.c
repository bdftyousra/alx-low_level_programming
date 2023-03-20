#include <stdlib.h>
#include "dog.h"

/**
*free_dog - Frees dog
*@d: dog to be freed
*
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
