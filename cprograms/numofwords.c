//to find no. of words in a sentence 
#include <stdio.h>
#include <string.h>
int main()
{
    char string[200];
    int count=0,i;
    printf("Enter the sentence :\n");
    gets(string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]==' ' && string[i+1]!=' ')
        count++;
    }
    printf("The number of words in the sentence is = %d\n",count+1);
}