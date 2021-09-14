#include<stdio.h>
int main(void)
{
	char ch;
	int num1,num2,num3;
	
	while((ch = getchar()) != '#')
	{
		if(ch == ' ')
			num1 ++;
		else if(ch == '\n')
			num2 ++;
		else
			num3 ++;
	}
	
	printf("blankspace = %d,\\n = %d,others = %d",num1,num2,num3);
	
	return 0;
}
