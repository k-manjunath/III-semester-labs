#program to check whether given number is a armstrong number



number = int(input('Enter a number: '));


numberCopy = number;

numOfDigits = 0;



while (numberCopy!=0):

    numberCopy //= 10;

    numOfDigits += 1;



numberCopy = number;

sumOfDigits = 0;



while (numberCopy!=0):

    power = 1;

    remainder = numberCopy % 10;

    for i in range(0,numOfDigits):

        power *= remainder;

    sumOfDigits += power;

    numberCopy //= 10;



if (sumOfDigits == number):

    print(number,'is a armstrong number');

else:

    print(number,'is not a armstrong number');