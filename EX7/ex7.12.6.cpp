#include<stdio.h>
int main(void)
{
	char ch;
	int index = 0;
	char cha[index];
	int num = 0;

	while((ch = getchar()) != '#' )
	{
		cha[index] = ch;
		index ++;
		printf(">>>index = %d\n",index);
			
		if(cha[index] == 'i' && cha[index - 1] == 'e')
			num ++;
	}
	
	printf("ei = %d",num);
	
	return 0;
}
