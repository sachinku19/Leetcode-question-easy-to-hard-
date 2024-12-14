#include<stdio.h>
#include<stdlib.h>


int  roman_checker(char roman)
{
    switch(roman)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D':return 500;
        case 'M': return 1000;
        default :return 0;
    }
}

int main()
{
    char roman[20];
    int result=0,i;
    int length=strlen(roman);

    printf("enter the roman numeral:\n");
    scanf("%s",&roman);

    for(i=0;i<length;i++)
    {
    int current=roman_checker(roman[i]);
    int next=roman_checker(roman[i+1]);

    if(current<next)
    {
        result=result+(next-current);
        i++;
    }
    else
    {
        result=result+current;
    }
    }
    printf("the integer value is:%d\t",result);
}