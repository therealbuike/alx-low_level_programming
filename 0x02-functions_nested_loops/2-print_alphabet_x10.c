#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int ten;
	char lettert;

	for (ten = 0; ten <= 9; ten++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
