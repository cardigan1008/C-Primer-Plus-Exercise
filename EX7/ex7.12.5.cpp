#include <stdio.h>
#include<stdbool.h>
int main(void)
{
	int num;
	char ch;

	num = 0;
	_Bool b = true;
	
	while(b)
	{	
		ch = getchar();
		switch(ch)
		{
		case '!':
			{
				printf("!!");
				num++;
				break;
			}
		case '.':
			{
				putchar('!');
				num ++;	
				break;
			}
		case '#':
			goto STOP; //尽量不要用goto，这里是为了练习一下goto才用的，可以直接用 b = false; 来代替。 
		default:
			{
				putchar(ch);
				break;
			}
		}
	}
	
	STOP:
	printf("Times to change = %d\n",num);
	
	return 0;
}
