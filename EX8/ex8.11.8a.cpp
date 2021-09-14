#include<stdio.h>
float get_num(void);
int get_first(void);
void menu(void);

int main(void)
{
	int choice;
	float num1,num2;
	
	menu();
	
	while((choice = get_first()) != 'q')  
	{
		printf("choice = %c\n",choice);
		printf("Enter first number: ");
		num1 = get_num();
		printf("Enter second number: ");
		num2 = get_num(); 
		
		switch(choice)
		{
			case ('a') :
				printf("%.3f + %.3f = %.3f\n", num1, num2, num1 + num2);
				break;
			case ('s') :
				printf("%.3f - %.3f = %.3f\n", num1, num2, num1 - num2);
				break;
			case ('m') :
				printf("%.3f * %.3f = %.3f\n", num1, num2, num1 * num2);
				break;
			case ('d') :
				while(num2 == 0)
				{
					printf("Enter a number other than 0: ");
					scanf("%g",&num2);
				}
				printf("%.3f / %.3f = %.3f\n", num1, num2, num1 / num2);
				break;
			default :
				printf("I do not recognize that input. Try again.\n");
		}
		menu();
	}
	printf("Bye!\n");
}

int get_first(void)
{
	int ch;
	
	ch = getchar();
	while(getchar() != '\n')
		continue;
	
	return ch;
}


float get_num(void)
{
	float num;
	char ch; 
	
	while((scanf("%g",&num)) != 1)
	{
		while((ch = getchar())!= '\n') 
			putchar(ch);
		
		printf(" is not a number.\n");
		printf("Please enter a number,such as 2.5, -1.78E8, or 3: "); 
	}
	
	return num;
}



void menu(void)
{
	printf("Enter the operation of your choice.\n");
	printf("a.add			s.subtract\n");
	printf("m.multiply		d.devide\n");
	printf("q.quit\n");
}
