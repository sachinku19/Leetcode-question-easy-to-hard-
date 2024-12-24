//length fo last word
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Length_of_last_word(char *s)
{
    int length=0;
    int size=strlen(s)-1;
    
    while(size>=0 && s[size]==' ')
    {
       size--;
    }

    while(size>=0 && s[size]!=' ')
    {
        length++;
        size--;
    }
    return length;
}

int main()
{
    char str[]="my name is sachin ";
    int length=strlen(str);

    printf("%d",Length_of_last_word(str));
}