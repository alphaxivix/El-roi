//program to to arithematic operation on complex numbers using structure
#include <stdio.h>
#include <stdlib.h>
struct complex
{
    int real,image;
};
int main()
{
    int choice,x,y,z;
    struct complex a,b,c;
    while(1)
    {
        printf("press 1 To add two complex numbers.\n");
        printf("press 2 To substract two complex numbers.\n");
        printf("press 3 To Multiply two complex numbers.\n");
        printf("press 4 To Divise two complex numbers.\n");
        printf("press 5 To exit the program.\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        if(choice==5)
            exit(0);
        if(choice>=1 && choice<=4)
        {
            printf("Enter a and b where a+ib is the first complex number:\n");
            printf("a=");
            scanf("%d",&a.real);
            printf("b=");
            scanf("%d",&a.image);
            printf("Enter c and d where c+id is the second complex number:\n");
            printf("c=");
            scanf("%d",&b.real);
            printf("d=");
            scanf("%d",&b.image);
        }
        if(choice==1)
        {
            c.real=a.real+b.real;
            c.image=a.image+b.image;
            printf("sum of the complex numbers = %d+i%d",c.real,c.image);
        }    
        else if(choice==2)
        {
            c.real=a.real-b.real;
            c.image=a.image-b.image;
            printf("Difference of the complex numbers = %d-i%d",c.real,c.image);
        }
        else if(choice==3)
        {
            c.real=a.real*b.real-a.image*b.image;
            c.image=a.image*b.real+a.real*b.image;
            if(c.image>=0)
                printf("Multiplicataion of complex numbers = %d+i%d",c.real,c.image);
            else
                printf("Multiplication of complex numbers = %d*i%d",c.real,c.image);
        }
        else if(choice==4)
        {
            if(b.real==0 && b.image==0)
                printf("Divison by zero isn't allowed");
            else
            {
                x=a.real*b.real+a.image*b.image;
                y=a.image*b.real-a.real*b.image;
                z=b.real*b.real+b.image*b.image;
                if(x%z==0 && y%z==0)
                {
                    if(y/z>=0)
                        printf("Division of the complex numbers = %d+%di",x/z,y/z);
                    else 
                        printf("Division of the complex numbers = %d %di",x/z,y/z);
                }
                else if(x%z==0 && y%z!=0)
                {
                    if(y/z>=0)
                        printf("Division of the complex numbers = %d+%d/%di",x/z,y/z);
                    else
                        printf("Division of the complex numbrers = %d %d/%di",x/z,y/z);
                }
                else if(x%z!=0 && y%z==0)
                {
                    if(y/z>=0)
                        printf("Division of the complex numbers = %d/%d+%di",x,y/z,z);
                    else
                        printf("Division of the complex numbers = %d %d/%di",x,z,y/z);
                }
                else 
                {
                    if(y/z>=0)
                        printf("Division of the complex numbers = %d/%d+%d/%d",x,z,y,z);
                    else 
                        printf("Division of the complex numbers = %d/%d %d/%d",x,z,y,z);
                }
            }
        }
        else 
            printf("INVALID CHOICE!!!please enter the required number");
            printf("\nPress any key to enter the choice again.....\n");
    }
}