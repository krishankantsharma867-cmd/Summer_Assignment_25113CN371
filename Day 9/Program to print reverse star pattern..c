#include <stdio.h>

int main() {
    int h,i,j;
    printf("Enter the height of pyramid :");
    scanf("%d",&h);
    for(i=0;i<=h;i++){
        printf("\n");
        for(j=h;j>i;j--){
            printf("*",j);
        }
    }
    
    return 0;
}