//to find the nth number of a fibonacci sequence 
#include <stdio.h>

int main(){
    int n,i,t1=0,t2=1,nextTerm=0;
    printf("Enter the value for n'th term :");
    scanf("%d",&n);
    printf("Fibonacci series : %d\t%d\t",t1,t2);
    if (n == 0 && n == 1){
        printf("n'th term of the fibonacci series is : %d",n);
    }
    else {
        nextTerm = t1+t2;
        for (i=3; i<=n; i++){
            printf("%d\t",nextTerm);
            t1 = t2;
            t2 = nextTerm;
            nextTerm = t1+t2;
        }
        printf("\nThe n'th term of the fibonacci sequence is :%d ",t2);
    }
    return 0;
}