#include <stdio.h>
int main(void)
{
	char ch = 'A';
	int num;
	
	loop : ch++;
	for (num = 1; num <= 6; num++)
	{
		for(; ch < 'A' + num;ch ++)
			printf("%c",ch);
		printf("\n");
		goto loop;
	}
	
	return 0;
}
