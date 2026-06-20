#include<stdio.h>

int main(){
    int n,a[10][10],flag=1;

    printf("Enter order of matrix: ");
    scanf("%d",&n);

    printf("Enter matrix elements:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]!=a[j][i]){
                flag=0;
                break;
            }
        }
    }

    if(flag==1)
        printf("Matrix is Symmetric");
    else
        printf("Matrix is Not Symmetric");

    return 0;
}