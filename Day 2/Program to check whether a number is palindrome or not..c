#include<stdio.h>
int main(){
    int n,revn=0,r,org;
    printf("Enter a number: ");
    scanf("%d", &n);
    org=n;
    while(n!=0){
        r=n%10;
        revn=revn*10+r;
        n=n/10;
    }
    if(org==revn){
        printf("number is palindrome");
    }
    else{
        printf("number is not palindrome");
    }
    return 0;
}