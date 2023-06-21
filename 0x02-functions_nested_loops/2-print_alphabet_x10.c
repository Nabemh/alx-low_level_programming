#include "main.h"
/**
 * void: Entry point
 * Description: Print 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)	
{
	print_alphabet_x10();
	int letter;
	int i;

	for(i = 1; letter <= 10; letter++)
	{
	       for (i = 97; i <= 122; i++)
	       {
		_putchar(i);
	       }
	}
	_putchar("\n");
	return (0);
}
