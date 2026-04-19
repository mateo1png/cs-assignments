#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int num;
    printf("Generating 10 numbers between 0 and 100 \n");
    srand(time(NULL));
    for(int i = 0;i<10;i++)
        {
            num=rand()%100+1;
            printf("%d \n",num);
        }
}