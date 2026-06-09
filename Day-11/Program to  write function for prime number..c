#include <stdio.h>
int prime(int a){
    int flag=0;
    if((a==1)||(a==0)){
        flag=1;
    }
    else{
        for(int i=2;i<=a/2;i++){
            if(a%i==0){
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        printf("The number is prime");
    }
    else{
        printf("The number is not prime");
    }
}   
int main(){
    int x;
    printf("Enter any number :");
    scanf("%d",&x);
    prime(x);
    return 0;
}