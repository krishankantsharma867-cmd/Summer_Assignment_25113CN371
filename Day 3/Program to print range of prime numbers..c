#include <stdio.h>

int main() {
 int st,en,i,j;

 printf("Enter start and end: ");
 scanf("%d%d",&st,&en);

 for(i=st;i<=en;i++) {
  for(j=2;j<i;j++) {
   if(i%j==0)
    break;
  }

  if(j==i)
   printf("%d ", i);
 }

 return 0;
}