#include main.h
#include stdio.h

/**
 * _puts_recursion - prints a string
 * @s: string to be printed
 */

void _puts_recursion(char *s);
{
if (*s)
{
	_puts(*s);
	_puts_recursion(s + 1);
}
else
	_puts('\n')
}
