#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],longest[100];
    int max=0,len=0,start=0;

    printf("Enter a string: ");
    gets(str);

    for(int i=0;;i++)
    {
        if(str[i]!=' ' && str[i]!='\0')
        {
            len++;
        }
        else
        {
            if(len>max)
            {
                max=len;
                strncpy(longest,str+start,max);
                longest[max]='\0';
            }
            len=0;
            start=i+1;
        }

        if(str[i]=='\0')
            break;
    }

    printf("Longest word: %s",longest);

    return 0;
}