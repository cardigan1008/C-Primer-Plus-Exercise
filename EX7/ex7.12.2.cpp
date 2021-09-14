#include<stdio.h>
int main(void)
{
	int num = 0;
	char ch;
	
	while((ch = getchar()) != '#')
	{
		printf("%5c%5d",ch,ch);
		num ++;
		
		if (num % 8 ==0)
			printf("\n");
	}
	
	return 0;
}
