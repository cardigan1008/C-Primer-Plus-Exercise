#include <stdio.h>
int main(void)
{
	int size = 0,num1,num2;
	char cha[size];
	char ch;
	
	while(ch = getchar() != '#')
	{
		cha[size] = ch;
		size++;
	}
	
	for (num1 = 0; num1 <= size - 1;num1 ++)
	{
		if((cha[num1] == 'i') && (cha[num1 - 1] == 'e'))
			num2 ++;
		else
			continue;
	}
	
	printf("ei = %d\n",num2);
	
	return 0; //数组我吐了... 
	
}
