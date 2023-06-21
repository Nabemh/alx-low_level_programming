#include "main.h"
/**
 * main:Entry point
 * Description: Prints the alphabet from a to z.
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
