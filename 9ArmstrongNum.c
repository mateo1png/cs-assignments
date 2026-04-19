#include<stdio.h>
void main()
{
int num;
int remainder;
int sum=0;
printf("enter a number");
scanf("%d",&num);
temp=num;
while(num!=0)
{
remainder = num%10;
sum = sum +(remainder*remainder*remainder);
num=num/10;
}
if (sum==temp)
printf("Number is an armstrong number");
else 
printf("Number is not an armstrong number");
}
