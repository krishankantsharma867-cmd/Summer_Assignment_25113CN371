#include <stdio.h>

int main() {
    int n,arr[100],j=0;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter array elements: ");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++) {
        if(arr[i]!=0) {
            arr[j]=arr[i];
            j++;
        }
    }
    while(j<n){
        arr[j]=0;
        j++;
    }
    printf("Array after moving zeroes to end: ");
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}