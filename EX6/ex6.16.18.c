#include<stdio.h>
int main(void)
{
	int week,num;
	
	num = 5;
	for(week = 1; num <= 150;week ++)
	{
		printf("Week %d : %d friends;\n",week,num);
		num -= week;
		num *= 2;
	}
	
	printf("Week %d : OVER!\n",week);
	
	return 0;
}
