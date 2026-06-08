#include <stdio.h>

int main() {
    int i,j,h;
    printf("Enter the dimension of hollow square :");
    scanf("%d",&h);
    for(i=1;i<=h;i++){
        printf("\n");
        for(j=1;j<=h;j++){
            if((i==1||j==1)||(i==h||j==h)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    }
    

    return 0;
}