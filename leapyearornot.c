#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year to check whether it is leap or not :");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("It is leap year.");
    }
    else if(year%100==0)
    {
        printf("It is not leap year.");
    }
    else if(year%4==0)
    {
        printf("It is leap year.");
    }
    else  
    {
        printf("It is not leap year.");
    
    }
    
}