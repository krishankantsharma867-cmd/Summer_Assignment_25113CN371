#include<stdio.h>

int main()
{
int id[10],salary[10],n,i;
char name[10][20];

printf("Enter number of employees: ");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("\nEnter Employee ID: ");
scanf("%d",&id[i]);

printf("Enter Employee Name: ");
scanf("%s",name[i]);

printf("Enter Salary: ");
scanf("%d",&salary[i]);
}

printf("\nEmployee Records\n");

for(i=0;i<n;i++)
{
printf("\nEmployee ID : %d",id[i]);
printf("\nName        : %s",name[i]);
printf("\nSalary      : %d\n",salary[i]);
}

return 0;
}