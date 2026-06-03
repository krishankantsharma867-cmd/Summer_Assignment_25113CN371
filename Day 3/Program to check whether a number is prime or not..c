#include<stdio.h>
int main(){
    int n,flag=1;
    printf("Enter any number : ");
    scanf("%d",&n);
    if(n==0 || n==1){
        printf("%d is not a prime number.",n);
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("%d is a prime number.",n);
        }
        else{
            printf("%d is not a prime number.",n);
        }

    }
}