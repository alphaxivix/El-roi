//to find sum of numbers using recursion
#include <stdio.h>
void Sum(int ,int );
int main (){
    int a,b;
    printf("Enter two numbers : \n");
    scanf("%d %d",&a,&b);
    Sum(a,b);
    return 0;
}
void Sum(int x,int y){
    int sum=0;
    sum = x+y;
    printf("The sum is = %d\n",sum);
}