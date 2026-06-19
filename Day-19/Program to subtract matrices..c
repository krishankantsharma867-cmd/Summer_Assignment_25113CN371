#include <stdio.h>

int main() {
   int m;
   printf("enter the size of the square matrix :");
   scanf("%d",&m);
   int a[m][m],b[m][m],c[m][m],sb=0;
   printf("enter the elements in first 2d array(matrix) :");
   for(int i=0;i<m;i++){
       for(int j=0;j<m;j++){
           scanf("%d",&a[i][j]);
       }
       
   }
   printf("entered 2d array :");
   for(int i=0;i<m;i++){
       printf("\n");
       for(int j=0;j<m;j++){
           printf("%d",a[i][j]);
       }
   }
   printf("\n");
  
   printf("enter the elements in second 2d array(matrix) :");
   for(int i=0;i<m;i++){
       for(int j=0;j<m;j++){
           scanf("%d",&b[i][j]);
       }
       
   }
   printf("entered 2d array :");
   for(int i=0;i<m;i++){
       printf("\n");
       for(int j=0;j<m;j++){
           printf("%d",b[i][j]);
       }
   }
   printf("\n");
   for(int i=0;i<m;i++){
       for(int j=0;j<m;j++){
           sb=a[i][j]-b[i][j];
           c[i][j]=sb;
       }
       
   }
   printf("difference of matrices :");
   for(int i=0;i<m;i++){
       printf("\n");
       for(int j=0;j<m;j++){
           printf("%d",c[i][j]);
       }
   }
   

    return 0;
}