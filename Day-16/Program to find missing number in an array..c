#include <stdio.h>

int main() {
    int n, arr[100], sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n - 1);
    for(int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Missing number = %d", n * (n + 1) / 2 - sum);
    return 0;
}

Input: