#include <stdio.h>
void swap(int*,int*);
int main()
{
    int x,y;
    printf("Enter the value of x and y");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("Before swapping : x = %d , y = %d \n", x,y);
    swap(&x,&y);
    printf("After Swapping : x = %d , y = %d \n",x,y);
    return 0;
    }
void swap(int*a,int*b){
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

