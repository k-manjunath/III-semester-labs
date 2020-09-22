#program to check whether of given number is a armstrong number



def factorial(n):

    fact = 1;

    for i in range (1,n+1):

        fact *= i;
    
    return fact;


number = int(input('Enter a number: '));

numberCopy = number;

sum = 0;

while (number != 0):

    sum += factorial(number%10);

    number //= 10;


if (sum == numberCopy):

    print('The number is a strong number');

else:

    print('The number is not a strong number');