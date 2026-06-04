#include <stdio.h>

int main() {
 int st,en,n,temp,r,sum;

 printf("Enter range: ");
 scanf("%d%d",&st,&en);

 for(n = st; n <= en; n++) {
  temp = n;
  sum = 0;

  while(temp>0){
   r=temp%10;
   sum=sum+r*r*r;
   temp=temp/10;
  }

  if(sum==n)
   printf("%d ",n);
 }

 return 0;
}