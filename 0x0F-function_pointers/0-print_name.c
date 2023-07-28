#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print a name using a pointer to function.
 * @name: string to add.
 * @f: pointer to a function.
 * Return: null.
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
