#include <stdio.h>

int main() {
    int n,arr[100],sum,found = 0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter required sum: ");
    scanf("%d",&sum);

    for(int i=0;i<n; i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i]+arr[j]==sum) {
                printf("Pair: %d %d\n", arr[i], arr[j]);
                found=1;
            }
        }
    }

    if(found==0)
        printf("No pair found");

    return 0;
}