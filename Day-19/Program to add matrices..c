//program to print the sum of two 3*3 matrices
#include <stdio.h>

int main() {
   int m;
   printf("enter the size of the square matrix :");
   scanf("%d",&m);
   int a[m][m],b[m][m],c[m][m],sum=0;
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
           sum=a[i][j]+b[i][j];
           c[i][j]=sum;
       }
       
   }
   printf("sum of matrices :");
   for(int i=0;i<m;i++){
       printf("\n");
       for(int j=0;j<m;j++){
           printf("%d",c[i][j]);
       }
   }
   

    return 0;
}