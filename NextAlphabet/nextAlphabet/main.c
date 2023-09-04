#include <stdio.h>
#include <stdlib.h>

char ceilInArray(char a[],int n,char element);

int main()
{
    int i,n;
    char arr[40],element,ceil;
    printf("\nEnter number of elements:");
    scanf("%d",&n);
    printf("\nEnter elements:");
    for(i=0;i<n;i++){
        getchar();
        scanf("%c",&arr[i]);
    }
    printf("\nEnter element to find ceil:");
    getchar();
    scanf("%c",&element);
    if(element>arr[n-2]){
        printf("\nCeil doesn't exists.");
        return 0;
    }
    ceil=ceilInArray(arr,n,element);
    printf("Ceil of %c is %c.",element,ceil);
    return 0;
}
char ceilInArray(char a[],int n,char element){
    int start=0,mid;
    int end=n-1;
    char res;
    while(start<=end){
        mid=(start+end)/2;
        if(a[mid]<=element){
            start=mid+1;
        }
        else if(a[mid]>element){
            res=a[mid];
            end=mid-1;
        }
    }
    return res;
}


