#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers with command line arguments
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 1 when argc < 3 and 0 otherwise
 */

int main(int argc, char *argv[])
{
	int num, num1, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = atoi(argv[1]);
		num1 = atoi(argv[2]);

		result = num * num1;
		printf("%d\n", result);
		return (0);
	}
}
