#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter the positive integer");
    scanf("%d",&n);
    if(n%5==0 || n%3==0)
    printf("it is divisible by 5 or 3");
    else
    printf("it is not divisible by 5 or 3");
    getch();
}