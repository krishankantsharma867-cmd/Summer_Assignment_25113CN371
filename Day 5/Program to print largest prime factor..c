#include <stdio.h>

int main() {
    int n,max=0;
    printf("Enter any number :");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        while(n%i==0){
            max=i;
            n=n/i;
        }
        
    }
    printf("%d",max);


    return 0;
}