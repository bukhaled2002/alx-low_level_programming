#include <stdio.h>
/**
 * main - this is comment
 * Return: 0 (Success)
 */
void main(int)
{
char i;
for(i='a';i<='z';i++){
	if (i != 'q' && i != 'e')
	{
		putchar(i);
	}
}
putchar('\n');
return (0);
}
