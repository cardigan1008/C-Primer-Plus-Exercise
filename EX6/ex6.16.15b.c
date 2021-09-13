#include<stdio.h>
#include<string.h>
int main(void)
{
	int len,n;
	char ch[len];
	
	printf("Enter sth.\n");
	for(n = 0;n < len;n ++)
		scanf("%c",&ch[n]);
		//为什么一定要去除换行符？ 
	
	len = strlen(ch);
	
	for(n = len - 1;n >= 0;n --)
		printf("%c",ch[n]);
	
	return 0;	
}
