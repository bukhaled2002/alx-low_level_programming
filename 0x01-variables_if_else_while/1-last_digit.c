#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
      	int n;
     	srand(time(0));
      	n = rand() - RAND_MAX / 2;
      	/* your code goes there */
      	int lastnum=n%10;
      	if(n>5){
	     	printf("Last digit of %lu is %d and is greater than 5",n,lastnum);
      	}else if(n==0){
	     	printf("Last digit of %lu is %d and is zero",n,lastnum);
      	}else{
	     	printf("Last digit of %lu is %d and is less than 6 and not 0",n,lastnum);
      	}  return (0);
}
