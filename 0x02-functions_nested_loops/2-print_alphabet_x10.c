#include "main.h"

/**
 * void: Entry point
 * Description: Print 10 times the alphabet, in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int i = 0;

	while(i < 10; i++)
	{
	       for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	       {
		_putchar(alphabet);
	       }
	}
	_putchar("\n")
}
