#include"main.h"

/**
 * print_rev - chaeck code
 * @s: str.
 * Return: noo.
 */

void print_rev(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	len--;
	while (len >= 0)
		_putchar(s[len--]);
	_putchar('\n');
}
