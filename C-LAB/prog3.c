//program to swap two real numbers
#include <stdio.h>
int main(){
    int i,j,temp;
    printf("Enter two numbers:\n");
    printf("A=");
    scanf("%d",&i);
    printf("B=");
    scanf("%d",&j);
    temp = j;
    j = i;
    i = temp;
    printf("A = %d\nB = %d",i,j);
    return 0;
}