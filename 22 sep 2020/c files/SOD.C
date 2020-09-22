//program to find the sum of the digits(without loop)
#include<stdio.h>
#include<conio.h>
int main()
{
	int number,sum = 0;
	clrscr();
	printf("Enter a number: ");
	scanf("%d", &number);
	//this logic works only for 4 digits
	sum = number%10 + (number/=10)%10 + (number/=10)%10 + (number/10)%10;
	printf("%d",sum);

	return 0;
}