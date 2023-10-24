#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter the positive integer:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("it is a even number");
    }
    else
    {
        printf("it is a odd number");
    }
    getch();
}

