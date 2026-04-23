#include<stdio.h>
void main()
{
int prod, div, sum, diff, num1, num2, n;
printf("enter 1. for addition, 2. for difference, 3. for multiplication, 4.for division");
scanf("%d",&n);
printf("enter two numbers");
scanf("%d%d",&num1,&num2);
switch (n)
{
case 1:
sum=num1+num2;
printf("sum is %d",sum);
break;
case 2:
diff = num1-num2;
printf("diff is %d",diff);
break;
case 3:
prod = num1*num2;
printf("prod is %d",prod);
break;
case 4:
if (num2!=0)
{
div=num1/num2;
printf("quotient is %d",div);
}
else
printf("Division by 0 is invalid");
break;
}

}
