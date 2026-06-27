#include <stdio.h>

int main() {
    int n, seat[100];
    char name[100][50];

    printf("Enter number of tickets: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("\nPassenger %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Seat Number: ");
        scanf("%d", &seat[i]);
    }

    printf("\n----- Ticket Details -----\n");

    for(int i = 0; i < n; i++) {
        printf("\nPassenger %d\n", i + 1);
        printf("Name        : %s\n", name[i]);
        printf("Seat Number : %d\n", seat[i]);
    }

    return 0;
}
