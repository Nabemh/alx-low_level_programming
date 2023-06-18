#include <stdio.h>

/**
 *main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int i, n;

for (i = 0; i < 100; i++)
{
for (n = 0; n < 100; n++)
{
if (i < n)
{
putchar((i / 10) + 48);
putchar((i % 10) + 48);
putchar(' ');
putchar((n / 10) + 48);
putchar((n % 10) + 48);
if (i != 98 || n != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
