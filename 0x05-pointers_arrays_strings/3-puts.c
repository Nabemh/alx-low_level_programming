#include "main.h"

/**
 * main - prints a string to the stdout
 *
 * Return: 0.
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
