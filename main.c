/*
   Write a C program to input two integers and display their sum, difference, product, quotient, and remainder.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b;
  printf("Enter your number1:");
  scanf("%d",&a);
  printf("Enter your number1:");
  scanf("%d",&b);
  int sum=a+b;
  int difference=a-b;
  int product=a*b;
  int quotient=a/b;

  int remainder=a%b;
  printf("sum=%d\ndifference=%d\nproduct=%d\nquotient=%d\nremainder=%d",sum,difference,product,quotient,remainder);

    return 0;
}
