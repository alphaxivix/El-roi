//program to find the fibnanocci number using recursion
#include <stdio.h>

int main(){
    int n,i,t1=0,t2=1,nextTerm=0;
    printf("Enter the nth value : \n");
    scanf("%d",&n);
    printf("Fibnanocci Series : %d \t %d \t",t1,t2);
    if (n == 0 && n == 1){
        printf("%d",n);
    }
    else 
        nextTerm=t1+t2;
        for(i=3; i<=n; i++){
            printf("%d\t",nextTerm);
            t1=t2;
            t2 = nextTerm;
            nextTerm = t1 + t2;
        }
        printf("\n%d th term in the series is %d \n",n,t2);
}