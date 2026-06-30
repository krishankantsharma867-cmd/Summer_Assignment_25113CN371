#include<stdio.h>

int roll[10],marks[10],n;
char name[10][20];

void input();
void display();
void search();

int main()
{
int ch;

printf("Enter number of students: ");
scanf("%d",&n);

input();

do
{
printf("\n----- MENU -----");
printf("\n1. Display Records");
printf("\n2. Search Student");
printf("\n3. Exit");
printf("\nEnter your choice: ");
scanf("%d",&ch);

switch(ch)
{
case 1:
display();
break;

case 2:
search();
break;

case 3:
printf("Thank You");
break;

default:
printf("Invalid Choice");
}
}
while(ch!=3);

return 0;
}

void input()
{
int i;

for(i=0;i<n;i++)
{
printf("\nStudent %d\n",i+1);

printf("Enter Roll No: ");
scanf("%d",&roll[i]);

printf("Enter Name: ");
scanf("%s",name[i]);

printf("Enter Marks: ");
scanf("%d",&marks[i]);
}
}

void display()
{
int i;

printf("\nRoll\tName\tMarks\n");

for(i=0;i<n;i++)
{
printf("%d\t%s\t%d\n",roll[i],name[i],marks[i]);
}
}

void search()
{
int i,r;

printf("Enter Roll No to Search: ");
scanf("%d",&r);

for(i=0;i<n;i++)
{
if(roll[i]==r)
{
printf("\nStudent Found");
printf("\nRoll No : %d",roll[i]);
printf("\nName    : %s",name[i]);
printf("\nMarks   : %d\n",marks[i]);
return;
}
}

printf("Student Not Found\n");
}