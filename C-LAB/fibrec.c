//program to find the n'th number of the fibonacci sequence using recursion function
#include <stdio.h>

void series(int num,int t1,int t2){
    static int nextTerm=1,i=3;
    if (i <= num){
           printf("%d\t",nextTerm);
           if(i == num){
            printf("\nThe %d'th number of the fibonacci series is : %d ",num,nextTerm);
           }
           t1 = t2;
           t2 = nextTerm;
           nextTerm = t1+t2;
           i++;
           series(num,t1,t2);
        }
}
int main(){
    int n,s1=0,s2=1;
    printf("Enter the value for the n'th number :");
    scanf("%d",&n);
    if (n == 0 && n == 1){
        printf("The %d'th number of the fibonacci series is : %d ",n,n);
    }
    else if (n>1) {
        printf("The fibonacci series : %d\t%d\t",s1,s2);
        series(n,s1,s2);
    }
    return 0;
}