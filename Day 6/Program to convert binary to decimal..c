#include <stdio.h>
#include<math.h>

int main() {
    int n,r,dec=0,i=0;
    printf("Enter any binary number :");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        dec+=r*pow(2,i);
        n=n/10;
        i++;
    }
    printf("decimal number=%d",dec);
    
    return 0;
}