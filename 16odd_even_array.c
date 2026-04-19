#include<stdio.h>
void main()
{
    int n,oddind=0,eveind=0,num,i;
    printf("Enter number of elements \n");
    scanf("%d",&n);
    int odd[n],even[n];
    for(i=0;i<n;i++)
        {
            printf("Enter Number \n");
            scanf("%d",&num);
            if(num%2!=0)
            {
                odd[oddind]=num;
                oddind++;
            }
            else
            {
                even[eveind]=num;
                eveind++;
            }
        }
    printf("Odd Array: ");
    for(i=0;i<oddind;i++)
        {
            printf("%d ",odd[i]);
        }
    printf("\nEven Array: ");
    for(i=0;i<eveind;i++)
        {
            printf("%d ",even[i]);
        }
}