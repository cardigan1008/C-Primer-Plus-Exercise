#include<stdio.h>
int main(void)
{
	char num[26]; 
	char ch;
	int index;
	
	for (ch = 'a' , index = 0;ch <= 'z' , index < 26;ch ++ , index++)
		num[index] = ch;
	
	for (index = 0; index < 26; index++)
		printf("%c\n",num[index]);
		
	return 0;
 } 
