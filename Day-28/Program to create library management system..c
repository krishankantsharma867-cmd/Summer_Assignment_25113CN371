#include <stdio.h>

int main() {
    int n, id[100];
    char name[100][50];

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &id[i]);

        printf("Enter Book Name: ");
        scanf("%s", name[i]);
    }

    printf("\n------ Library Records ------\n");

    for (int i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Book ID   : %d\n", id[i]);
        printf("Book Name : %s\n", name[i]);
    }

    return 0;
}