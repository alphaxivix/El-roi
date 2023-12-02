//Multiplication table upto n
#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number to define the limit of multiplication table:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%dx%d=%d\n",i,j,i*j);
        }
        printf("\n");
    }
}