#include <stdio.h>

void main() {
    int bin,rem,dec=0,base=1;
    printf("Enter a binary number");
    scanf("%d",&bin);
    while (bin!=0)
        {
            rem=bin%10;
            bin/=10;
            dec+=rem*base;
            base*=2;
        }
    printf("Decimal number is: %d ",dec); 
}
