//program to test for an armstrong number
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,numCpy,numOfDigits,i,power,sum,rem;
	numOfDigits = sum = rem = i = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	numCpy = num;
	while(numCpy != 0)
	{
		numCpy/= 10;
		numOfDigits++;
	}
	numCpy = num;
	while(numCpy != 0)
	{
		power = 1;
		rem = numCpy % 10;
		for(i=0; i<numOfDigits; i++)
		{
			power *= rem;
		}
		sum += power;
		power = 1;
		numCpy /= 10;
	}
	if(sum == num)
	{
		printf("%d is a armstrong number",num);
	}
	else
	{
		printf("%d is not a armstrong number",num);
	}
	return 0;
}