#include "main.h"
#include <stdio.h>

/**
 * puts2 - A function that prints every character of a string.
 * @str: Holds the string of characters.
 * Return: always zero.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i+=2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
