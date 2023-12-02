//program to find the distance between two points
#include <stdio.h>
#include <math.h>
int main(){
    float x1,x2,y1,y2,dist;
    printf("Enter the values:\n");
    printf("x1,y1 = \n");
    scanf("%f %f",&x1,&y1);
    printf("x2 y2 = \n");
    scanf("%f %f",&x2,&y2);
    dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("The Distance between the points (%.2f,%.2f) & (%.2f,%.2f) is = %.2f",x1,y1,x2,y2,dist);
    return 0;
}