#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	int num;
	char ch;
	_Bool b = true;
	
	num = 0;
while(b)
{
	ch = getchar();
	if(ch == '.')
		{
			printf("!");
			num ++;
		}
		
	else if(ch == '!')
		{
			printf("!!");
			num ++;
		}
	else if(ch == '#')
		b = false;
	else
		putchar(ch);
}

	printf("\nTimes to change = %d\n",num);
	
	return 0;
}
