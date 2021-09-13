#include<stdio.h>
#define RATE 0.08
int main(void)
{
	int y;
	double sum;
	
	for(y = 0,sum  = 100.0; sum >= 10 ;y++)
	{
		sum *= (1 + RATE);
		sum -= 10;
	}
	
	printf("years = %d\n",y + 1);
	
	return 0; 
}
