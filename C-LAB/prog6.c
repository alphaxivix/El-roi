//program to find the sum of the squares of numbers stored in a array
#include <stdio.h>
#define VAL 10
int main(){
    int i;
    float x[VAL],sum;
    printf("Enter 10 values :\n");
    for (i=0; i<VAL; i++){
        printf("%d = ",i+1);
        scanf("%f",&x[i]);
        sum = sum + x[i]*x[i];
    }
    printf("The values you entered:\n");
    for (i=0; i<VAL; i++){
        printf("%d = %.2f \n",i+1,x[i]);
    }
    printf("The sum of squares of the values is = %f\n",sum);

}