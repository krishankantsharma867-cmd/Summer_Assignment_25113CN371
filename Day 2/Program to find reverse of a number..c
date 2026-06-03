#include<stdio.h>
int main(){
    int n,revn=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0){
        revn=revn*10+n%10;
        n=n/10;
    }
    printf("reverse of number: %d",revn);
    return 0;

}