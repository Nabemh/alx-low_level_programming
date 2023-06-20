#include "main.h"

/**
 * main: Prints the alphabet in lowcase, followed by a new line.
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
	
}
