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
			goto STOP; //������Ҫ��goto��������Ϊ����ϰһ��goto���õģ�����ֱ���� b = false; �����档 
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
