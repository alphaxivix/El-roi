//to find the factorial of a number
#include <stdio.h>
int main()
{
    int num,fact=1,i;
    printf("Enter the number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    } 
    printf("Factorial of %d is = %d\n",num,fact);
    return 0;
}