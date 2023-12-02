//merging two arrays,sorting merged arrays in ascending order
#include <stdio.h>
int main(){
    int n1,n2,n3,i=0,temp=0; //array size declaration
    int a[20],b[20],c[40];
    printf("Enter the size of first array :");
    scanf("%d",&n1);

    printf("Enter the array elements:");
    for (i=0; i<n1; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the size of second array :");
    scanf("%d",&n2);

    printf("Enter the array elements:");
    for (i=0; i<n2; i++){
        scanf("%d",&b[i]);
    }
    
    n3 = n1+n2;
    for(i=0; i<n1; i++){
        c[i] = a[i];
    }    
    for(i=0; i<n2; i++){
        c[i+n1] = b[i];
    }

    printf("The Merged Array :");   //printing the merged array
    for (i=0; i<n3; i++){
        printf("%d ",c[i]);
    }

    //bubble sorting the merged array
    printf("\nThe Sorted Array: ");
    for(i=0; i<n3; i++){
        for(int j=i+1; j<n3; j++){
            if(c[i]>c[j]){
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    for(i=0; i<n3; i++){
        printf("%d ",c[i]);
    }
    return 0;
}