#include <stdio.h>
int r=0;
int rev(int n){
    if(n==0){
        return r;
    }
    else{
        r=r*10+n%10;
        return rev(n/10);
    }
}
int main() {
    int a;
    printf("Enter any number :");
    scanf("%d",&a);
    printf("Reverse of %d =%d",a,rev(a));
    return 0;
}