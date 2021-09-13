#include<stdio.h>
int main(void)
{
	int ori = 100;
	int y;
	double in1 = 0.1,in2 = 0.05;
	double sum1 = 100.0,sum2 =100.0;
	
	for(y = 0 ;sum1 >= sum2;y++)
	{
		sum1 += ori * in1;
		sum2 *= (1 + in2);
	}
	
	printf("sum = %g,years = %d",sum2,y);
	
	return 0;
}
