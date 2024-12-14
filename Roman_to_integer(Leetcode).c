
#include<stdio.h>
#include<stdlib.h>

int roman(char value);
int romanToInt(char* s);

int romanToInt(char* s) {
int result=0,i;
int length=strlen(s);

for(i=0;i<length;i++)
{
    int current=roman(s[i]);
    int next=roman(s[i+1]);

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

  return result; 
}

int roman(char value)
{
    switch(value)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default : return 0;

    }
}

int main()
{
    char s[20];
    printf("enter the roman numeral:\n");
    scanf("%s",s);

 int result= romanToInt(s);
printf("The integer value is: %d\n", result);}