#include <stdio.h>

int main() {
    int n,ar[100],even=0,odd=0;
    printf("Enter number of elements in array :");
    scanf("%d",&n);
    printf("Enter elements in the array :");
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++){
        if(ar[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("No. of even elements :%d",even);
    printf("\n");
    printf("No. of odd elements :%d",odd);

    return 0;
}