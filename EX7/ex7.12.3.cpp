#include<stdio.h>
int main(void)
{
	int num;
	int num1 = 0,num2 = 0;
	int sum1 = 0,sum2 = 0;

	printf("Enter some int.\n");

	while(scanf("%d",&num) == 1)
	{	
		if(num % 2 == 0 || num == 1) //其实没必要，求模看的是余数而不是商，误解为求商之后会截断了 
		{
			if(num != 1)
			{
				num1 ++;
				sum1 += num;
			}
			else
			{
				num2 ++;
				sum2 += num;
			}	
		}
		else
		{
			num2 ++;
			sum2 += num;
		}
	}
	printf("num1 = %d,num2 = %d,average1 = %.2f,average2 = %.2f\n",
		num1,num2,(float)sum1 / num1,(float)sum2 / num2);	
	
	return 0;
}
