#include<stdio.h>
int main(void)
{
	int num1,num2,num,sum,status;
	
	printf("Enter 2 numbers\n");
	status =scanf("%d %d",&num1,&num2);
	
	while(num1 < num2 && status == 2)
	{
		sum = 0;
		for(num = num1;num <= num2;num ++)
			sum = sum + num*num;
	
		printf("sum = %d\n",sum);
		
		printf("Enter 2 numbers\n");
		status = scanf("%d %d",&num1,&num2);
	}
	
	return 0;
}
