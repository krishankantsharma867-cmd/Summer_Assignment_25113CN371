#include <stdio.h>

int main() {
    int n, acc[100];
    char name[100][50];
    float balance[100];

    printf("Enter number of customers: ");
    scanf("%d", &n);

    for(int i=0;i<n;i++) {
        printf("\nCustomer %d\n", i+1);

        printf("Enter Account Number: ");
        scanf("%d", &acc[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Balance: ");
        scanf("%f", &balance[i]);
    }

    printf("\n----- Bank Account Details -----\n");

    for(int i=0;i<n;i++) {
        printf("\nCustomer %d\n", i+1);
        printf("Account No : %d\n", acc[i]);
        printf("Name       : %s\n", name[i]);
        printf("Balance    : %.2f\n", balance[i]);
    }

    return 0;
}