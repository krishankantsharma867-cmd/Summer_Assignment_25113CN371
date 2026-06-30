#include<stdio.h>

int main()
{
int n,i;
char book[10][30];
char author[10][30];

printf("Enter number of books: ");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("\nEnter Book Name: ");
scanf("%s",book[i]);

printf("Enter Author Name: ");
scanf("%s",author[i]);
}

printf("\nLibrary Records\n");

for(i=0;i<n;i++)
{
printf("\nBook Name   : %s",book[i]);
printf("\nAuthor Name : %s\n",author[i]);
}

return 0;
}