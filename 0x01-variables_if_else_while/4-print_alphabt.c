#include<stdio.h>
void main(int)
{
int i;
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
