#include<stdio.h>
void main(int)
{
int i;
for(i='a';i<='z';i++){
	if (i == 'q' || i == 'e')
	{
		printf("");
	}else {
	printf("%s\n",i);
	}
}

return (0);
}
