#include<stdio.h>
/**
 * main - this is comment
 * Return: 0 (Success)
 */
int main(void)
{
int k;
char i;

for (k = 0 ; k < 10; k++)
	putchar(k + '0');

for (i = 'a'; i <= 'f'; i++)
	putchar(i);

putchar('\n');
return (0);
}
