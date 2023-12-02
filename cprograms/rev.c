//to find sum and reverse of a number
#include <stdio.h>
int main()
{
    int num,rev=0,sum=0,d;
    printf("Enter a number:\n");
    scanf("%d",&num);
    while(num>0)
    {
        d=num%10;
        sum=sum+d;
        rev=(rev*10)+d;
        num=num/10;
    }
    printf("The reverse of the number is %d\n",rev);
    printf("The sum of the digits is %d\n",sum);
    return 0;
}