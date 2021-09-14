#include<stdio.h>
int main(void)
{
	char ch,lift,down;
	char num,space;
	
	ch = getchar();
	
	for (num = 'A'; num <= ch;num ++)
	{
		space = num;
		while (ch - space > 0)
		{
			printf(" ");
			space ++;
		}
			
		for(lift = 'A';lift <= num;lift ++)
			printf("%c",lift);
			
		for(down = (num - 1);down >= 'A';down--)
			printf("%c",down);
		printf("\n");
	}
	return 0;
}
