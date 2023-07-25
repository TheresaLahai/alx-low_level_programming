#include "main.h"
#include <stdio.h>

/**
 * puts2 - A function that prints every character of a string.
 * @str: Holds the string of characters.
 * Return: always zero.
 */

void puts2(char *str)
{	
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i+=2;
	}
	putchar('\n');
}
