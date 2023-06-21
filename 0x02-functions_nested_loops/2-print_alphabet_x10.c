#include "main.h"

/**
 * void: Entry point
 * Description: Print 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char alphabet;
	char letter;

	for(letter =1; letter <= 10; letter++)
	{
	       for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	       {
		_putchar(alphabet);
	       }
	}
	_putchar("\n")
}
