//to find and display armstrong numbers within a user defined range
#include <stdio.h>
void main()
{
    int num,start,end,sum,digit,temp;
    printf("Enter the minimum range of numbers:");
    scanf("%d",&start);
    printf("Enter the maximum number of range:");
    scanf("%d",&end);
    printf("Armstrong Numbers between the range is :\n");
    for(num=start;num<=end;num++)
    {
        temp=num;
        sum=0;
        while(temp!=0)
        {
            digit=temp%10;
            temp=temp/10;
            sum=sum+(digit*digit*digit);
        }
        if(sum==num)
            printf("%d,",num);
    }
}