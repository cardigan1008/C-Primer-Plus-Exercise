#include<stdio.h>
int main(void)
{
	int num,max,min;
	
	printf("Enter a number.(q to quit)\n");
	scanf ("%d",&num);
	
	printf("Enter max(q to quit)\n");
	scanf("%d",&max);
	
	printf("Enter min(q to quit)\n");
	scanf("%d",&min);
	
	if(num*num*num <= max && num*num*num >= min)
	{
		printf("num    num2    num3\n");
		printf("%d%7d% 9d\n",num,num*num,num*num*num);
	}
	else if (num*num*num > max)
			printf("Over max!");
	else if (num*num*num < min)
			printf("Too small!");

	return 0;
}
