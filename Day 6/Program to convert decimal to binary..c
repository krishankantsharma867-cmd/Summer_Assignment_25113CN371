#include <stdio.h>
int main() {
    int n,bin[50],i=0;
    printf("Enter any decimal number :");
    scanf("%d",&n);
    while(n!=0){
        bin[i]=n%2;
        n=n/2;
        i++;
    }
    printf("Binary number=");
    for(int j=i-1;j>=0;j--){
        printf("%d",bin[j]);
    }
    return 0;
}