//fnction callings
#include <stdio.h>
void addition(int x,int y){
    int s;
    s = x+y;
    printf("%d + %d = %d\n",x,y,s);
}
void subtract(int x,int y){
    int sub;
    sub = x-y;
    printf("%d - %d = %d\n",x,y,sub);
}
void multi(int x,int y){
    int mul;
    mul = x*y;
    printf("%d * %d = %d\n",x,y,mul);
}
void div(int x,int y){
    int divi;
    divi = x/y;
    printf("%d / %d = %d\n",x,y,divi);
}
void areasq(int x){
    int area;
    area = x*x;
    printf("The Area of the Square = %d\n",area);
}
void arearec(int x,int y){
    int area;
    area = x*y;
    printf("The Area of the rectangle = %d\n",area);
}
void areapar(int x,int y){
    int area;
    area = x*y;
    printf("The Area of the paralellogram = %d\n",area);
}
void areacir(int x){
    int area;
    area = 3.14*(x*x);
    printf("The Area of the circle = %d\n",area);
}
void perisq(int x){
    int peri;
    peri = x*4;
    printf("The Perimeter of the square = %d\n",peri);
}
void perirec(int x,int y){
    int peri;
    peri = x*2+y*2;
    printf("The Perimeter of the rectangle = %d\n",peri);
}
void pericir(int x){
    int peri;
    peri = 2*3.14*x;
    printf("The Perimeter of the circle = %d\n",peri);
}
void printline(){
    printf("Enter Two Numbers : \n");
}
void printline2(){
    printf("Enter the Lenth & breadth : \n");
}
int main (){
    int a,b,x,y,z;
nav :
    printf("\n\n1.Arithmetic Operations\n2.Measurments\n3.Conversion\n4.Exit\n");
    scanf("%d",&y);
    switch (y){
        case 1 :
            printf("\n\n1.Addition \n2.Subtraction\n3.Multiplication\n4.Division\n");
            printf("\npress corresponding number :");
            scanf("%d",&x);
            switch(x){
                case 1 : 
                    printline();
                    scanf("%d %d",&a,&b);
                    addition(a,b);
                        break;
                case 2 :
                    printline();
                    scanf("%d %d",&a,&b);
                    subtract(a,b);
                        break;
                case 3 : 
                    printline();
                    scanf("%d %d",&a,&b);
                    multi(a,b);
                        break;
                case 4 :
                    printline();
                    scanf("%d %d",&a,&b);
                    div(a,b);
                        break;
                default : printf("Invalid Selection!!!\n");
                        break;    
            }
        case 2 :
            printf("\n\n1.Area of a square\n2.Area of a Rectangle\n3.Area of Paralellogram\n");
            printf("4.Area of a Circle\n5.Perimeter of a Square\n6.Perimeter of a Rectangle\n7.Perimeter of a circle\n");
            scanf("%d",&z);
            switch (z){
                case 1 :
                    printf("Enter the Length Of sides:");
                    scanf("%d",&a);
                    areasq(a);
                        break;
                case 2 :
                    printline2();
                    scanf("%d %d",&a,&b);
                    arearec(a,b);
                        break;
                case 3 :
                    printline2();
                    scanf("%d %d",&a,&b);
                    areapar(a,b);
                        break;
                case 4 :
                    printf("Enter the radius:");
                    scanf("%d",&a);
                    areacir(a);
                        break;
                case 5 :
                    printline2();
                    scanf("%d",&a);
                    perisq(a);
                        break;
                case 6 :
                    printline2();
                    scanf("%d %d",&a,&b);
                    perirec(a,b);
                        break;
                case 7 :
                    printf("Enter the radius:");
                    scanf("%d",&a);
                    pericir(a);
                        break;
                default : printf("Invalid Selection!!!\n");
                        break;
            }
        case 4 : goto exit;
                break;
    }
goto nav;
exit :
    return 0;
}