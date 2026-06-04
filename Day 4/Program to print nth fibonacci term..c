#include <stdio.h>

int main() {
 int n,t1=0,t2=1,nt;

 printf("Enter nth term: ");
 scanf("%d",&n);

 if(n==1){
  printf("%d",t1);
 }
 else if(n==2){
  printf("%d", t2);
 }
 else {
  for(int i=3;i<=n;i++) {
   nt=t1+t2;
   t1=t2;
   t2=nt;
  }
  printf("%d",t2);
 }

 return 0;
}

