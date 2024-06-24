#include "main.h"
#include <stdio.h>

/*
 * _puts - print smth
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str)
		_putschar(*str++);

		_putschar('/n');
	}
