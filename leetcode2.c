#include<stdio.h>

int main()
{
    int arr[5]={34,23,12,4,6};
    int b_day;
    int s_day;

    printf("enter the buy day and sell day:\n");
    scanf("%d\n%d",&b_day,&s_day);

    int profit=(arr[b_day-1])-(arr[s_day-1]);
    if(profit<=0)
    {
        printf("no any profit:\n");
    }
    else
    {
        printf("%d is profit:\n",profit);
    }
}