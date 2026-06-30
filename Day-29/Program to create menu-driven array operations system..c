#include<stdio.h>

int main()
{
int a[100],n,i,ch,sum=0,max,min;

printf("Enter size of array: ");
scanf("%d",&n);

printf("Enter array elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("\n1. Display Array");
printf("\n2. Sum of Elements");
printf("\n3. Find Maximum");
printf("\n4. Find Minimum");
printf("\nEnter your choice: ");
scanf("%d",&ch);

switch(ch)
{
case 1:
printf("Array Elements: ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
break;

case 2:
for(i=0;i<n;i++)
sum=sum+a[i];
printf("Sum = %d",sum);
break;

case 3:
max=a[0];
for(i=1;i<n;i++)
{
if(a[i]>max)
max=a[i];
}
printf("Maximum = %d",max);
break;

case 4:
min=a[0];
for(i=1;i<n;i++)
{
if(a[i]<min)
min=a[i];
}
printf("Minimum = %d",min);
break;

default:
printf("Invalid Choice");
}

return 0;
}

Operations