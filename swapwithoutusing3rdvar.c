#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two numbers:\n");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swapped Numbers are :\n");
    printf("a=%d\tb=%d",a,b);

}