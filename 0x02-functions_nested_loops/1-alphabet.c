#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: print all alphabet in lowercase
 * print_alphabet - prints the english alphabet from a-z.
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		/* Description : print_alphabet call putchar from main*/
		_putchar(letter);
		_putchar('\n');
	}
}
