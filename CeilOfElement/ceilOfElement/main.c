#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,arr[40],i,element,ceil;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("\nEnter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEnter element to find ceil:");
    scanf("%d",&element);
    if(element>arr[n-1]){
        printf("\nCeil doesn't exists.");
        return 0;
    }
    ceil=ceilInArray(arr,n,element);
    printf("Ceil of %d is %d.",element,ceil);
    return 0;
}
int ceilInArray(int a[],int n,int element){
    int start=0,res,mid;
    int end=n-1;
    while(start<=end){
        mid=(start+end)/2;
        if(a[mid]==element){
            return a[mid];
        }
        else if(a[mid]<element){
            start=mid+1;
        }
        else if(a[mid]>element){
            res=a[mid];
            end=mid-1;
        }
    }
    return res;
}

