#include<stdio.h>

int main()
{
char str[100];
int i,len=0,ch;

printf("Enter a string: ");
gets(str);

printf("\n1. Find Length");
printf("\n2. Display String");
printf("\n3. Reverse String");
printf("\nEnter your choice: ");
scanf("%d",&ch);

switch(ch)
{
case 1:
for(i=0;str[i]!='\0';i++)
len++;
printf("Length = %d",len);
break;

case 2:
printf("String = %s",str);
break;

case 3:
for(i=0;str[i]!='\0';i++)
len++;
printf("Reverse = ");
for(i=len-1;i>=0;i--)
printf("%c",str[i]);
break;

default:
printf("Invalid Choice");
}

return 0;
}