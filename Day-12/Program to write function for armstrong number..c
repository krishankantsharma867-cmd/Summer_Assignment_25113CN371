#include <stdio.h>
#include<math.h>
void armstrong(int n){
    int count=0;
    int r,sum=0,temp=n;
    int org=n;
    while(temp!=0){
        count++;
        temp=temp/10;
    }
    while(n!=0){
        r=n%10;
        sum=sum+(int)round(pow(r,count));
        n=n/10;
    }
    if(sum==org){
        printf("Armstrong number");
    }
    else{
        printf("Not an Armstrong number");
    }
}
    
int main() {
    int x;
    printf("Enter any number :");
    scanf("%d",&x);
    armstrong(x);

    return 0;
}