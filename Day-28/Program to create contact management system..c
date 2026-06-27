#include <stdio.h>

int main() {
    int n;
    char name[100][50];
    char phone[100][15];

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("\nContact %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Phone Number: ");
        scanf("%s", phone[i]);
    }

    printf("\n----- Contact List -----\n");

    for(int i = 0; i < n; i++) {
        printf("\nContact %d\n", i + 1);
        printf("Name         : %s\n", name[i]);
        printf("Phone Number : %s\n", phone[i]);
    }

    return 0;
}