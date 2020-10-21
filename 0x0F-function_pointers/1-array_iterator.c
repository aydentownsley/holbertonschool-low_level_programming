#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action == NULL || array == NULL)
		return;

	action(array[size]);
}
