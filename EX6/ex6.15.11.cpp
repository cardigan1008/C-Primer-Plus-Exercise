#include <stdio.h>
#define SIZE 8
int main(void)
{
	int by_twos[SIZE];
	int index,num;
	
	for(num = 1,index = 0;index < SIZE;num ++,index++)
		by_twos[index] = 2 * num;
	
	for(index = 0;index < SIZE;index++)
		printf("%5d ",by_twos[index]);
	
	return 0;
}
