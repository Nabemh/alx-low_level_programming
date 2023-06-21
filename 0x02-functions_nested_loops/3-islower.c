#include "main.h"
/**
 * main: Entry point
 * Description: Checks for lowercase character.
 *
 * Return: 1 if character is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n')
}
