#include<stdio.h>
#include<string.h>
int main(void)
{
	int num,index;
	char ch[num];
	
	scanf("%s",ch) ; 
	num = strlen(ch);
	
	for(index = num - 1;index >= 0;index --)
		printf("%c",ch[index]);
	
	return 0;
 } 
