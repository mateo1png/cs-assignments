#include <stdio.h>
#include <stdlib.h>
void main() {
    int num1,num2,gcd,small=1;
    printf("Enter two numbers \n");
    scanf("%d%d",&num1,&num2);
    for (int i=1;i<=num1 && i<=num2; i++)
        {
            if(small==1)
            {
                if(i!=1)
                {
                    if(num1%i==0 && num2%i==0)
                    {
                        small=0;
                        printf("SCD is %d \n",i);
                    }
                }
            }
            if(num1%i==0 && num2%i==0)
            {
                gcd=i;
            }
        }
    printf("GCD is %d \n",gcd);
    if (small == 1)
        printf("No SCD");
    
}
