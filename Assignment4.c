#include<stdio.h>
void main()
{
int bs,HRA,TA,gs,PT,ns;
printf("enter base salary");
scanf("%d",&bs);
HRA=0.10*bs;
TA=0.05*bs;
gs=HRA+TA+bs;
PT=0.02*gs;
ns=gs-PT
printf("Gross salary is %d, Net salary is %d",gs,ns);
}
