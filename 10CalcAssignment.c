#include<stdio.h>
void main()
{
int result, num1, num2, n;
printf("enter 1. for addition, 2. for difference, 3. for multiplication, 4.for division,5.for power, 6. for factorial");
scanf("%d",&n);
printf("enter two numbers");
scanf("%d%d",&num1,&num2);
switch (n)
{
case 1:
result=num1+num2;
printf("sum is %d",result);
break;
case 2:
result = num1-num2;
printf("diff is %d",result);
break;
case 3:
result = num1*num2;
printf("prod is %d",result);
break;
case 4:
if (num2!=0)
{
result=num1/num2;
printf("quotient is %d",result);
}
else
printf("Division by 0 is invalid");
break;
case 5:
result=1;
for (int i = num2;i>0;i--)
{
result = result*num1;
}
break;
case 6:
result=1;
for(int i = num1;i>0;i--)
{
result=result*i;
}
break;
}
}
