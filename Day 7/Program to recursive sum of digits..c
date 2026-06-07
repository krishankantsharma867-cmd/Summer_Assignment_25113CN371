#include <stdio.h>
int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return (n%10)+sum(n/10);
    }
}
int main() {
    int x;
    printf("Enter any number :");
    scanf("%d",&x);
    printf("Sum of digits=%d",sum(x));
    return 0;
}