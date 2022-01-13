#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers :\n");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("Swapped Numbers are :\n");
    printf("a=%d\tb=%d",a,b);
}
