#include <stdio.h>

int main()
{


    int arr[] = {34, 21, 32, 12, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);



    int target, i, j, nge,t_ind,s;
    printf("enter the target:\n");
    scanf("%d", &target);


    for (i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            printf("target %d is at %d:\n", target, i);
            t_ind=i;
            break;
        }

    }


    while ((arr[i] <= target) && (i < size))
    {
        i++;
    }


    if (i>=size)
    {
        printf(" nge not found:\n");
         
       
    }
     else
     {
        nge = arr[i];
        printf("nge %d is find at %d:", nge, i);
     }

}