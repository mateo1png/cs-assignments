/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
	int num,fact=1,prime=1;
	float agg;
	printf("enter a number \n");
	scanf("%d",&num);
	printf("Square root is %.2f \n",sqrt(num));
	printf("Square is %d \n",num*num);
	printf("Cube is %d \n",num*num*num);
	for(int i=2; i++; i<sqrt(num))
	{
		if (num%i==0)
		{
			printf("Number is not prime \n");
			prime=0;
			break;
		}
	}
	if (prime == 1)
		printf("Number is prime \n");
	for(int i=1; i++; i<=num)
	{
		fact=fact*i;
	}
	printf("Factorial is %d \n",fact);
	printf("Prime Factors are: ");
	if (num%2==0)
	{
		printf("2 ");
		while(num%2==0)
		{
			num=num/2;
		}
	}
	for(int i=3; i<sqrt(num); i=i+2)
	{
		if (num%i==0)
		{
			printf("%d ",i);
			while(num%i==0)
			{
				num=num/i;
			}
		}
	}
}