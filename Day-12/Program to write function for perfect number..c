#include <stdio.h>
void perfect(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        printf("Perfect number");
    }
    else{
        printf("Not a perfect number");
    }
}

int main() {
    int x;
    printf("Enter any number :");
    scanf("%d",&x);
    perfect(x);

    return 0;
}