#include<stdio.h>
int main(){
    int n,pr=1;
    printf("Enter any number to find the product of its digits: ");
    scanf("%d", &n);
    while(n!=0){
        pr*=n%10;
        n=n/10;
    }
    printf("product of digits: %d",pr);
    return 0;

}