#include <stdio.h>

int main() {
    int n,ar[100];
    printf("Enter number of elements in array :");
    scanf("%d",&n);
    printf("Enter elements in the array :");
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("Inputed array :");
    for(int i=0;i<n;i++){
        printf("%d ",ar[i]);
    }

    return 0;
}