#include <stdio.h>
int fact(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact*=i;
    }
    return fact;
}

int main() {
    int x;
    printf("Enter any number :");
    scanf("%d",&x);
    printf("Factorial of %d =%d",x,fact(x));
    return 0;
}