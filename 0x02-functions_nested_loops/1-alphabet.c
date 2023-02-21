#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - any description
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
	_putchar(letter);
}
_putchar('\n');

}
