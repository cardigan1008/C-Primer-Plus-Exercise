#include<stdio.h>
#include<string.h>

int main(void)
{
    int num;
    char word[num];

    printf("Enter a word.\n");
    scanf("%s", word);

    num = strlen(word);

    for(num = num - 1;num >= 0 ;num --)
        printf("%c",word[num]);
    printf("\n");

    return 0;
}
