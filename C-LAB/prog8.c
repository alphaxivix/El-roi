//program to find the sum of digits and reverse of a number
#include <stdio.h>
int main(){
    int n,sum=0,i,d,rev;
    printf("Enter a number :");
    scanf("%d",&n);
    while(n>0){
        d = n%10;
        sum = sum+d;
        rev = rev*10 + d;
        n = n/10;
    }
    printf("The sum of the digits is = %d\n",sum);
    printf("The Reverse of the number = %d\n",rev);
    return 0;
}