//to count the number of students belonging to each of groups between 0-9,10-19....100
#include <stdio.h>
#define COUNT 11
int main(){
    int i,n,group[COUNT]={0,0,0,0,0,0,0,0,0,0,0},mark[n],low,high;
    printf("Enter Number of students:");
    scanf("%d",&n);
    printf("Enter the marks of %d students\n",n);
    for(i=0; i<=n; i++){
        printf("%d = ",i+1);
        scanf("%d",&mark[i]);
        ++group[(int)(mark[i])/10];
    }
    printf("GROUP\t\t\tRANGE\t\t\tFREQUENCY\n");
    for(i=0; i<=COUNT; i++){
        low = i*10;
        high = i*10+9;
        if(i == 10){
            high = 100;
        }
        printf("%d\t\t\t%d to %d\t\t\t%d\n",i+1,low,high,group[i]);
    }
    return 0;
}