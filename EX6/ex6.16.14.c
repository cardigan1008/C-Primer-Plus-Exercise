#include<stdio.h>
int main(void)
{
	double num1[8];
	double num2[8];
	int index1,index2;
	
	printf("Enter 8 numbers.\n");
	for(index1 = 0;index1 < 8; index1 ++)
	{
		scanf("%Lf",&num1[index1]);
		for(index2 = 0;index2 <= index1;index2 ++)
			num2[index1] += num1[index2];
	}
	
	for(index1 = 0; index1 < 8; index1 ++)
		printf("%-5g",num1[index1]);
	printf("\n");
	
	for(index1 = 0;index1 < 8;index1 ++)
		printf("%-5g",num2[index1]);
		
	return 0;
}
