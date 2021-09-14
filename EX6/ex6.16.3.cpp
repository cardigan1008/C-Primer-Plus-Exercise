#include <stdio.h>
int main(void)
{
	int num;
	char ch;
	
	for (num = 5; num >= 0; num--)
	{
		for(ch = 'F'; ch >= ('A' + num); ch--)
			printf("%c",ch);	
		printf("\n");
	}
	
	return 0;
		
}
