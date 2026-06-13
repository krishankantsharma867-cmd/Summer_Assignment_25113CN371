#include <stdio.h>

int main() {
    int n,ar[100],sum=0;
    float avg;
    printf("Enter number of elements in array :");
    scanf("%d",&n);
    printf("Enter elements in the array :");
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++){
        sum+=ar[i];
    }
    avg=((float)sum/n);
    printf("Sum of elements of array :%d",sum);
    printf("\n");
    printf("Average of elements of array :%f",avg);
    
    return 0;
}