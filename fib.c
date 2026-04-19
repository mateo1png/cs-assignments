#include<stdio.h>
void main()
{
int n;
int i=1;
int sum=1;
int oldsum=0;
printf("enter a number");
scanf("%d",&n);
while (i<=n)
{
printf("%d",sum);
sum=sum+oldsum;
oldsum=sum;
i++;
}
}
