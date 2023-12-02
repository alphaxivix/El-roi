//to display a * pyramid
#include <stdio.h>
int main ()
{
    int i,j,rows;
    printf("How many rows should the pyramid need?");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}