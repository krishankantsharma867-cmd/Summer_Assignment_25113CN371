#include <stdio.h>
void fib(int n){
    int t1=0,t2=1,nt=t1+t2;
    printf("%d %d",t1,t2);
    for(int i=3;i<=n;i++){
            nt=t1+t2;
            printf(" %d ",nt);
            t1=t2;
            t2=nt;
    
    }
}
int main() {
    int x;
    printf("Enter no. of terms in series :");
    scanf("%d",&x);
    fib(x);
    return 0;
}
