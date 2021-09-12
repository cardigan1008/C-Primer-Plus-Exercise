#include<stdio.h>
int main(void)
{
	int num1,num2,num,sum,status;
	sum = 0;
	
	printf("Enter 2 numbers\n");
	status =scanf("%d %d",&num1,&num2);
	
	while(num1 < num2 && status == 2)
	{
		for(num = num1;num <= num2;num ++)
			sum = sum + num*num;
	
		printf("sum = %d\n",sum);
		
		printf("Enter 2 numbers\n");
		scanf("%d %d",&num1,&num2);
	}
	
	return 0;
}
