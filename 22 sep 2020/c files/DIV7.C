//Check whether a given number is 7
#include<stdio.h>
#include<conio.h>
int main()
{
	int number;
	clrscr();
	printf("Enter a number: ");
	scanf("%d", &number);
	if(number % 7 == 0)
	{
		printf("%d is divisible by 7",number);
	}
	else
	{
		printf("%d is not divisible by 7",number);
	}
	return 0;
}