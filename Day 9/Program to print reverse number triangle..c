#include <stdio.h>

int main() {
    int h,i,j;
    printf("Enter the height of pyramid :");
    scanf("%d",&h);
    for(i=h;i>0;i--){
        printf("\n");
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
    }
    
    return 0;
}