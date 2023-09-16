#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf("Enter the string to reverse:\n");
    gets(str);
    // retrieve length of string
    int length=strlen(str);
    // initialize i at start and j at end of char array
    int i=0,j=length-1;
    // run while loop
    while(i<j){
        // swap ith element and jth element
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        // increment i and decrement j
        i++;
        j--;
    }
    printf("\nAfter reversing:  %s",str);
    return 0;
}
