#include <stdio.h>
int main(void)
{
	const int size = 4;
	const int number = 8;
	int index,num;
	
	for (index = 0; index < size; index ++)
	{
		for(num = 0; num < number; num ++)
			printf("$");
		printf("\n");
	}
	
	return 0;
}
