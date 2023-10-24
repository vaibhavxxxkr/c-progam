#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n>0)
    printf("it is a positive number");
    else if (n<0)
    printf("it is a negative number");
    else
    printf("it is a zero");
    getch();
}
    
 