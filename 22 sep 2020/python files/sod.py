#program to sum of digits of given number



num = int(input('Enter a number: '));



#logic only works for 4 digit numbers

sumOfDigits = (num%10) + (num//10)%10 + (num//100)%10 + (num//1000)%10;

print('the sum of the digits is',sumOfDigits);
