#include "main.h"

/**
 * _print_rev_recursion(char *s): prints a string in reverse.
 *
 */

void _print_rev_recursion(char *s)
{

	if(*s)
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
