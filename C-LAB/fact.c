//program to find the factorial of a number 
#include <stdio.h>

int main(){
    int n,fact=1,i;
    printf("\n\nN: Defines the number to find factorial\n");
    printf("enter the value for N :");
    scanf("%d",&n);
    printf("\n\nFactorial of the number %d is:",n);
    for(i=1; i<=n; i++){
        fact = fact*i;
        printf("%d*",i);
    }
    printf(" = %d \n",fact);
    return 0;
}