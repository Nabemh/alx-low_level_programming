#include "main.h"

/**
 * _puts - prints a string to the stdout
 * @str: String of text
 *
 */
void _puts(char *str)
{
	int s;

	for (s = 0; str[s] != '\0';)
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
