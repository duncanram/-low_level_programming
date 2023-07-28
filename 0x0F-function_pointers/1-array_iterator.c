#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array element on a new line.
 * @array: it's an array
 * @size: how many elements to print out.
 * @action: a pointer to print in regular or hexa.
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
