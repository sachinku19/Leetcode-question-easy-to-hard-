#include<stdio.h>
#include<stdbool.h>

int isPelindrome(int x)
{
    int reminder;
    long reverse=0;
    int temp_element=x;
    while (x!=0)
    {
        reminder=x%10;
        reverse=reverse*10+reminder;
        x=x/10;
    }

    if(reverse==temp_element)
    {
        
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    int x=21;
    
    if(isPelindrome(x))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}