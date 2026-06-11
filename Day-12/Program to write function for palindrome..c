#include <stdio.h>
void palindrome(int n){
    int r,rn=0;
    int org=n;
    while(n!=0){
        r=n%10;
        rn=rn*10+r;
        n=n/10;
    }
    if(rn==org){
        printf("Palindrome");
    }
    else{
        printf("Not a Palindrome");
    }
    
}
int main() {
    int x;
    printf("Enter any number :");
    scanf("%d",&x);
    palindrome(x);
    return 0;
}