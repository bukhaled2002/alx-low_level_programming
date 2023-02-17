#include <stdlib.h>
#include <time.h>
/**
 * main - this is comment
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastnum = n % 10;

	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastnum);
	else if (n == 0)
		printf("Last digit of %d is %d and is zero\n", n, lastnum);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnum);
return (0);
}
