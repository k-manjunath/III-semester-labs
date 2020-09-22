#program to find the reverse of a given number



num = int(input('Enter a number: '));

reverse = 0;

while num!= 0:

    remainder = num % 10;

    reverse = reverse*10 + remainder;

    num //= 10;



print('The reversed number is',reverse);