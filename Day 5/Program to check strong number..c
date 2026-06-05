#include <stdio.h>
int fact(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    return fact;
}
int main() {
    int n,sum=0,r,org;
    printf("Enter any number :");
    scanf("%d",&n);
    org=n;
    while(n>0){
        r=n%10;
        sum+=fact(r);
        n=n/10;
    }
    if(org==sum){
        printf("%d is strong number",org);
    }
    else{
        printf("%d is not a strong number",org);
    }
    return 0;
}
