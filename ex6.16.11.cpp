#include<stdio.h>
int main(void)
{
	int num1,num2,num,sum;
	sum = 0;
	
	printf("Enter 2 numbers\n");
	scanf("%d %d",&num1,&num2);
	
	while(num1 < num2)
	{
		for(num = num1;num <= num2;num ++)
			sum = sum + num*num;
	
		printf("sum = %d\n",sum);
		
		scanf("%d %d",&num1,&num2);
	}
	
	return 0;
}
