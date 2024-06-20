#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4.
 * Description: print 0 to 9
 * Return: returns 0
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0';  c <='9'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
