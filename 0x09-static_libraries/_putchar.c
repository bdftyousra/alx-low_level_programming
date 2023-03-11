#include <unistd.h>

/**
 * _putchar - write
 * @c: the character
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
