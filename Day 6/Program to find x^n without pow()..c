#include <stdio.h>

int main() {
    int x,n,ans=1;
    printf("Enter the number :");
    scanf("%d",&x);
    printf("Enter the power of number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        ans*=x;
    }
    
    printf("%d^%d= %d",x,n,ans);
    
    return 0;
}
