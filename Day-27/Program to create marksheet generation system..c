#include <stdio.h>

int main() {
    int roll, m1, m2, m3, total;
    float per;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Marks of 3 Subjects: ");
    scanf("%d%d%d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    per = total / 3.0;

    printf("\nMarksheet\n");
    printf("Roll Number : %d\n", roll);
    printf("Total Marks : %d\n", total);
    printf("Percentage  : %.2f%%\n", per);

    return 0;
}