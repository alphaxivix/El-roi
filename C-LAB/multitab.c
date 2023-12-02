//to display a multiplication table upto n
#include <stdio.h>
int main(){
    int n,i,j;
    printf("\nN : displays the Multiplication Table upto N\n");
    printf("\nEnter the value for N :");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            printf("%d * %d = %d\n",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}