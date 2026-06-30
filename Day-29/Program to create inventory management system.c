#include<stdio.h>

int main()
{
int id,qty;
float price,total;

printf("Enter Product ID: ");
scanf("%d",&id);

printf("Enter Quantity: ");
scanf("%d",&qty);

printf("Enter Price: ");
scanf("%f",&price);

total=qty*price;

printf("\nProduct ID = %d",id);
printf("\nQuantity = %d",qty);
printf("\nPrice = %.2f",price);
printf("\nTotal Value = %.2f",total);

return 0;
}