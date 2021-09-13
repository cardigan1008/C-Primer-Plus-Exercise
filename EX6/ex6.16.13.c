#include<stdio.h>
#define SIZE 8
int main(void)
{
	int num[SIZE];
	int ans = 1;
	int n;
	
	for (n = 0;n < SIZE ;n ++)
	{
		ans *= 2;
		num[n] = ans;
	}
	
	n = 0;
	do
	{
		printf("%-7d",num[n]);
		n ++;
	}while(n < SIZE);
	
	return 0;
}

