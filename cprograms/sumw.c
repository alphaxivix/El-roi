//finding sum using passing a argument and a return value 
#include <stdio.h>
int value (int , int);
int main(){
    int x,y,sum;
    printf("Enter two numbers :\n");
    scanf("%d %d",&x,&y);
    sum = value(x,y);
    printf("%d + %d = %d\n",x,y,sum);
    return 0;
}
int value (int a,int b){
    int sum;
    sum = a+b;
    return (sum);
}
