#include<stdio.h>
void main(int)
{
char i;
for(i='a';i<='z';i++){
	if (i == 'q' || i == 'e')
	{
		return ("");
	}else {
		putchar(i);
	}
}
putchar('\n');
return (0);
}
