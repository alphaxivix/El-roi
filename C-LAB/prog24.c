//swapping numbers using call by reference
#include <stdio.h>
void swap(int*x,int*y);
int main(){
    int a,b;
    printf("Enter two numbers :");
    printf("A = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("After swapping : A = %d B = %d",a,b);
    return 0;
}
void swap(int*x,int*y){
    static int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}