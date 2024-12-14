#include<stdio.h>
#include<stdlib.h>

int main()
{
    int count=0;
    int j;
    int size;
    printf("enter the size of an arry:\n");
    scanf("%d",&size);
    int arr[size];
    
    printf("enter the arry:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                
            }
            
        }
    }
    if(count>0)
    {
        printf("true:\n");
    }
    else
    {
        printf("false:\n");
    }
}