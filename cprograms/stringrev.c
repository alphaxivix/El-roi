//string reversion using recursion
#include <stdio.h>
#include <string.h>
void revstr(char*str1)
{
    static int i,len,temp;
    len=strlen(str1);
    if(i<len/2)
    {
        temp=str1[i];
        str1[i]=str1[len-1-i];
        str1[len-i-1]=temp;
        i++;
        revstr(str1);
    }
    printf("%d\n",len);
}
int main()
{
    char str1[50];
    printf("enter a string:");
    gets(str1);
    printf("Before reversing the string: %s\n",str1);
    revstr(str1);
    printf("After reversing the string: %s\n",str1);
}
