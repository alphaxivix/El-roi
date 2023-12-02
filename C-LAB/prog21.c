//program to find number of denominations for a given amount
#include <stdio.h>
int main(){
    int deno[9]={500,200,100,50,20,10,5,2,1},amnt,notes,i;
    printf("Enter the Amount :");
    scanf("%d",&amnt);
    for(i=0; i<9; i++){
        notes = amnt/deno[i];
        if(notes){
            amnt = amnt%deno[i]; //remaining money
            printf("%d * %d = %d\n",notes,deno[i],notes*deno[i]);
        }
    }
    return 0;
}