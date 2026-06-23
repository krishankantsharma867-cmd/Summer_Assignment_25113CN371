#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100],s2[100];
    int count1[256]={0},count2[256]={0};
    int i;

    printf("Enter first string: ");
    gets(s1);

    printf("Enter second string: ");
    gets(s2);

    for(i=0;s1[i]!='\0';i++)
    {
        count1[s1[i]]++;
    }

    for(i=0;s2[i]!='\0';i++)
    {
        count2[s2[i]]++;
    }

    for(i=0;i<256;i++)
    {
        if(count1[i]!=count2[i])
        {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}