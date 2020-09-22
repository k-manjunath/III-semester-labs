//program to reverse a given number
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,remainder,reverse;
	remainder = reverse = 0;
	clrscr();
	printf("Enter  a number: ");
	scanf("%d", &num);
	while(num != 0)
	{
		remainder = num % 10;
		reverse = reverse * 10 + remainder;
		num /= 10;
	}
	num = reverse;
	printf("The reversed number is %d",num);

	return 0;
}