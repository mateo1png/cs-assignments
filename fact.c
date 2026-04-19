#include<stdio.h>
int factorial(int n)
{
int fact=1;
for(int i=1; i<=n; i++)
{
fact = fact*i;
}
return fact;
}
void main()
{
int n, fact;
printf("Enter a Number");
scanf("%d",&n);
fact=factorial(n);
printf("Factorial of %d is %d",n,fact);
}

