#include<stdio.h>
#include<string.h>

int main(void)
{
    int num,in;
    char word[num];

    printf("Enter a word.\n");
    scanf("%s",word);

    num = strlen(word);

    for(in = num - 1;in >= 0 ;in --)
        printf("%c",word[in]);
    printf("\n");

    return 0;
}
