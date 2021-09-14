#include <stdio.h>
int main(void)
{
	int index,num;
	
	for (num = 1; num <= 5; num ++)
	{
			for (index = 1; index <= num; index ++)
			printf("$");
		printf("\n");
	}
	return 0;
}
