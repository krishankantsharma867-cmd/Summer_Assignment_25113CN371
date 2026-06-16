#include <stdio.h>

int main() {
    int n, arr[100], maxFreq = 0, element;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) {
        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }
        if(count > maxFreq) {
            maxFreq = count;
            element = arr[i];
        }
    }

    printf("Maximum frequency element = %d\n", element);
    printf("Frequency = %d", maxFreq);
    return 0;
}