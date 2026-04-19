/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	int m1,m2,m3,m4,m5;
	float agg;
	printf("enter 5 numbers");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	if (m1<40||m2<40||m3<40||m4<40||m5<40)
	{
		printf("Fail");
		return 0;
	}
	agg=(m1+m2+m3+m4+m5)/5;
	if (agg>=75)
		printf("Distinction");
	else if (agg>=60 && agg<75)
		printf("First Class");
	else if(agg>=50 && agg<60)
		printf("Second Class");
	else
		printf("Third Class");
	return 0;

}