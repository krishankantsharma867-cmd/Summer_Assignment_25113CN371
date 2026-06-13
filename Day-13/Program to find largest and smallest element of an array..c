#include <stdio.h>

int main() {
    int n,ar[100],max,min;
    printf("Enter number of elements in array :");
    scanf("%d",&n);
    printf("Enter elements in the array :");
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    max=ar[0];
    for(int i=1;i<n;i++){
        if(max<ar[i]){
            max=ar[i];
        }
    }
    min=ar[0];
    for(int i=1;i<n;i++){
        if(min>ar[i]){
            min=ar[i];
        }
    }
    
    printf("Largest element=%d",max);
    printf("\n");
    printf("Smallest element=%d",min);
    

    return 0;
}