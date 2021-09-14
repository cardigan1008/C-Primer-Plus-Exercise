#include<stdio.h>
int main(void)
{
	int num2,index;
	int num1 = 0;
	char cha[index];
	char ch;
	
	while(cha[index] =(ch = getchar()) != '#' )
		index ++;
	
	printf("index= %d\n",index);
	
	for(num2 = 0 ; num2 <= index; num2 ++ )
	{
		if(cha[num2] == 'i' && cha[num2 - 1] == 'e')
			num1 ++;
		else
			continue;
	}
	
	printf("ei = %d",num1);
	
	return 0;
}
