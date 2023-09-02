#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,arr[40],i,element,floor;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("\nEnter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEnter element to find floor:");
    scanf("%d",&element);
    if(element<arr[0]){
        printf("\nFloor doesn't exists.");
        return 0;
    }
    floor=floorInArray(arr,n,element);
    printf("Floor of %d is %d.",element,floor);
    return 0;
}
int floorInArray(int a[],int n,int element){
    int start=0,res,mid;
    int end=n-1;
    while(start<=end){
        mid=(start+end)/2;
        if(a[mid]==element){
            return a[mid];
        }
        if(a[mid]<element){
            res=a[mid];
            start=mid+1;
        }
        else if(a[mid]>element){
            end=mid-1;
        }
    }
    return res;
}
