#include<stdio.h>
#include<stdlib.h>

int main()
{
    // int size;
    // printf("enter the size of an arrya:\n");
    // scanf("%d",&size);

    // int arr[size];
    // printf("enter the array elements:\n");
    // for(int i=0;i<size;i++)
    // {
    //     scanf("%d",&arr[i]);
    // }
int arr[6]= {7,1,5,3,6,4};

    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)

        {
            if((arr[i])-(arr[j])>0)
            {
                printf("profit:%d",(arr[i])-(arr[j]));
                break;
            }
            
        }
    }
}