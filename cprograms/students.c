//to count the number of students belonging to each of groups of marks : 0-9,10-19,...100-100
#include <stdio.h>
#define MAXVAL 11
#define COUNT 11
int main()
{
    float marks[MAXVAL];
    int i,high,low,group[COUNT]={0,0,0,0,0,0,0,0,0,0,0};
    printf("Enter the marks of %d students:",MAXVAL);
    for(i=0;i<MAXVAL;i++)
    {
        scanf("%f",&marks[i]);
        ++group[(int)(marks[i]/10)];
    }
    printf("GROUP       RANGE       FREQUENCY\n");
    for(i=0;i<COUNT;i++)
    {
        low=i*10;
        if(i==10)
            high=100;
        else 
            high=low+9;
        printf("%d      %d to %d        %d\n",i+1,low,high,group[i]);
    }
}