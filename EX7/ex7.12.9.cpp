#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	int num,i,j;
	bool cri = true;
	
	printf("Please enter a positive integer(not 1).\n");
	scanf("%d",&num);
	
	while (num == 1 || num <= 0)
	{
		printf("No!\n");
		printf("Please enter a positive integer(not 1).\n");
		scanf("%d",&num);
	}
	if (num > 1)
	{
		for(i = 2;i <= num;i++)
		{
		
			for(j = 2; j < i ;j++)
			{
				if(i % j == 0)
				{
					cri = false;
					break;
				}
			}
			printf(">>>i = %d.\n>>>cri = %d\n",i,cri);
			if(cri)
				printf("%d is a prime.\n",i);
		}
	}
	return 0;		
 } 
