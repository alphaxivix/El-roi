//to find the average of prime numbers 
#include <stdio.h>
void read(int a[]);
int main()
{
    int i,j,sum=0,count=0,flag,a[10];
    for(i=0;i<10;i++)
    {
        flag=0;
        for(j=a[i]-1;j>1;j--)
        {
            if(a[i]%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            sum=sum+a[i];
            count++;
            printf("\nsum=%d count=%d",sum,count);
        }
    }
    printf("The average is = %d\n",(sum/count));
    return 0;
}
void read(int a[])
{
    int i;
    printf("Enter 10 nos:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
}