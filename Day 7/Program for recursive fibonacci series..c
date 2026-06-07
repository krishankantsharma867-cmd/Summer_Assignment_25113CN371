#include<stdio.h>
int fib(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
int main(){
    int a;
    printf("Enter no. of terms in fibonacci series :");
    scanf("%d",&a);
    printf("fibonacci series:");
    for(int i=1;i<=a;i++){
        printf("%d ",fib(i));
    }
    return 0;
}
