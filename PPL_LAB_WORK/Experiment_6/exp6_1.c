
/*
a."void armstrong(int)"checks if the given number is a armstrong or not.
b."void coprime(int)"reverses the given number and checks if the given number are reversed number are coprime.
c."int factorial(int)"computes the factorial of the given number using recursion and return to main().
*/
#include <stdio.h>

int factorial(int n);
void armstrong(int n);
void coprime(int n);

int main()
{
   int num;
   printf("Enter a number: ");
   scanf("%d", &num);

   armstrong(num);
   coprime(num);
   int fact = factorial(num);
   printf("The factorial of %d is %d\n", num, fact);

   return 0;
}

void armstrong(int n)
{
   int num, digit, sum = 0;
   num = n;
   
   while (num != 0)
   {
      digit = num % 10;
      sum += digit * digit * digit;
      num /= 10;
   }

   if (sum == n)
      printf("The given number %d is an Armstrong number.\n", n);
   else
      printf("The given number %d is not an Armstrong number.\n", n);
}

void coprime(int n)
{
   int reverse = 0, temp = n;
   while (temp != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + temp % 10;
      temp = temp / 10;
   }

   if ((n, reverse) == 1)
      printf("The given number %d and its reverse %d are coprime.\n", n, reverse);
   else
      printf("The given number %d and its reverse %d are not coprime.\n", n, reverse);
}

int factorial(int n)
{
   if (n == 0)
      return 1;
   else
      return (n * factorial(n - 1));
}
