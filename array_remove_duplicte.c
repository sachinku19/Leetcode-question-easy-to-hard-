#include<stdio.h>

int main()
{
    int arr[5]={1,3,4,2,1};
    int count=0;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]==arr[j])
            {
                count=count+1;
            }
        }

    }
    printf("%d",count);
}