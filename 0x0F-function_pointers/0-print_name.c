#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 * @name: Pointer to a char
 * @f: Pointer to a func that prints nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && (*name != '\0') && (f != NULL))
	{
		f(name);
	}
}
