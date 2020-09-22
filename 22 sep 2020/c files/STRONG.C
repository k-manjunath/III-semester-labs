//program to find if the given number is a strong number
#include<stdio.h>
#include<conio.h>
int factorial(int n)
{
	int fact = 1;
	for(n; n>=1; n--)
		fact *= n;
	return fact;
}
int main()
{
	int num,numCpy,sum = 0;
	clrscr();
	printf("Enter a number: ");
	scanf("%d", &num);
	numCpy = num;
	while(numCpy != 0)
	{
		sum += factorial(numCpy % 10);
		numCpy /= 10;
	}
	if(sum == num)
	{
		printf("The number is a strong number");
	}
	else
	{
		printf("The number is not a strong number");
	}
	return 0;
}