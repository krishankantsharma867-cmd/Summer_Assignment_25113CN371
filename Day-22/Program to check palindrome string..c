#include<stdio.h>
#include<string.h>

int main(){
    char str[100],rev[100];
    int i=0,len;

    printf("Enter a string: ");
    gets(str);

    len=strlen(str);

    while(i<len){
        rev[i]=str[len-1-i];
        i++;
    }
    rev[i]='\0';

    if(strcmp(str,rev)==0)
        printf("Palindrome String");
    else
        printf("Not a Palindrome String");

    return 0;
}