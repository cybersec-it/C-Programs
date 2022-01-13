#include<stdio.h>
int main()
{
    int days,weeks,years;
    printf("Enter the total number of days:");
    scanf("%d",&days);
    years=days/365;
    weeks=(days%365)/7;
    days=(days%365)%7;
    printf("Years=%d\t, Weeks=%d\t, Days=%d",years,weeks,days);
}