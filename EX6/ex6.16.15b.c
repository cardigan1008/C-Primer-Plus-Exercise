#include<stdio.h>
#include<string.h>
int main(void)
{
	int len,n;
	char ch[len];
	
	printf("Enter sth.\n");
	for(n = 0;n < len;n ++)
		scanf("%c",&ch[n]);
		//Ϊʲôһ��Ҫȥ�����з��� 
	
	len = strlen(ch);
	
	for(n = len - 1;n >= 0;n --)
		printf("%c",ch[n]);
	
	return 0;	
}
