#include<stdio.h>
#include<stdlib.h>

int remove_duplication(int arr[],int n)
{
    if(n==0 || n==1)
    {
        return n;
    }

    int newlength=1;

    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            arr[newlength]=arr[i];
            newlength++;
        }
    }
    printf("after duplaocation:\n");

    for(int i=0;i<newlength;i++)
    {
        printf("%d",arr[i]);
    }
    return newlength;

}


int main()
{
    int arr[]={1,2,3,3,4,5,5};
    int size=sizeof(arr)/sizeof(arr[0]);

printf("%d",remove_duplication(arr,size));
}