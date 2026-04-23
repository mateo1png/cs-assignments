#include<stdio.h>
void main()
{
int n,prod;
int i = 1;
printf("enter a number");
scanf("%d",&n);
while(i<=20)
{
prod = n*i;
printf("%d * %d = %d \n",n,i,prod);
i++;
}
}
