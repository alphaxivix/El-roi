//merging two arrays
#include <stdio.h>
int main(){
    int a[5],b[5],c[11],i=0;
    printf("Enter elements for first array:");
    for(i=0; i<5; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter elements for second array:");
    for(i=0; i<5; i++){
        scanf("%d",&b[i]);
    }
    for(i=0; i<5; i++){
        c[i] = a[i];
    }
    for(i=0; i<5; i++){
        c[i+5] = b[i];
    }
    printf("The merged array is :");
    for(i=0; i<10; i++){
        printf("%d ",c[i]);
    }
    return 0;
}