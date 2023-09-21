#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[50],str2[50];
    int i,j;
    printf("Enter first string:\n");
    gets(str1);
    printf("\nEnter second string:\n");
    gets(str2);
    for(i=0;str1[i]!='\0';i++);
    for(j=0;str2[j]!='\0';j++){
        str1[i]=str2[j];
        i++;
    }
    str1[++i]='\0';
    printf("\nConcatenated string:%s\n",str1);
    return 0;
}
