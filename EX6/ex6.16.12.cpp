#include<stdio.h>
int main(void)
{
	double num1,num2,sum1,num3,sum2;
	
	printf("Enter times.\n");
	
	while (scanf("%Lf",&num1) == 1)
	{
		for(num3 = 1.0;num3 <= num1;num3 ++)
		{
			sum1 = 1.0;
			num2 = 1.0;
			num2 *= -1;
			
			sum1 =  -num2/num3 + sum1;
		}	
		for(num3 = 1.0;num3 <= num1;num3 ++)
		{
			sum2 = 1.0;
			num2 = 1.0;
			
			sum2 =  num2/num3 + sum2;
		}	
	
		printf("sum1 = %f,sum2 = %f\n",sum1,sum2);
		printf("Enter times.\n");
	}
	
	return 0;
	
}
