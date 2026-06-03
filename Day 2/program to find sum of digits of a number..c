#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter any number to find the sum of its digits: ");
    scanf("%d", &n);
    while(n!=0){
        sum=sum+n%10;
        n=n/10;
    }
    printf("Sum of digits: %d", sum);
    return 0;
}