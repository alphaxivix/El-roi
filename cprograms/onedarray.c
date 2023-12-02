#include <stdio.h>
#define VAL 5
int main()
{
    int numbers[VAL],i,square=0;
    printf("Enter %d numbers:",VAL);
    for(i=0;i<VAL;i++)
    {
        scanf("%d",&numbers[i]);
        square=square+numbers[i]*numbers[i];
    }
    printf("The numbers entered are:\n");
    for(i=0;i<VAL;i++)
    {
        printf("[%d]=%d\n",i+=1,numbers[i]);
    }
    printf("Sum of the square is = %d",square);
    return 0;
}