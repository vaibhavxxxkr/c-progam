#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,n3;
    printf("enter the positive integer n1 :");
    scanf("%d",&n1);
    printf("enter the positive integer n2 :");
    scanf("%d",&n2);
    printf("enter the positive integer n3 :");
    scanf("%d",&n3);
    if(n1>n2)
    {
        if(n1>n3)
        {
            printf("the greatest number is %d",n1);
        }
        else
        {
            printf("the greatest number is %d",n3);
        }
    }
    else
    if(n2>n3)
    printf("the greatest number is %d",n2);
    else
    {
        printf("the greatest number is %d",n3);
    }
    getch();
}