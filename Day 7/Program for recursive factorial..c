#include <stdio.h>

int fact(int a){
        if(a==0){
            return 1;
        }
        else{
            return a*fact(a-1);
        }
    }
int main(){
    int x;
    printf("Enter any number :");
    scanf("%d",&x);
    printf("factorial of %d =%d",x,fact(x));
    return 0;
}