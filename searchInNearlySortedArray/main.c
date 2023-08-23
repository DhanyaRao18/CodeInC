#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,key,a[20],pos;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("\nEnter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("n\Enter the element to search:\n");
    scanf("%d",&key);
    pos=searchNearlySorted(a,n,key);
    if(pos==-1){
        printf("\nElement is not found.");
    }
    else{
        printf("\nElement is found at position %d",pos);
    }
    return 0;
}

int searchNearlySorted(int arr[],int n,int key){
    int mid;
    int start=0,end=n-1;
    while(start<=end){
        mid=(start+end)/2;
        if(key==arr[mid]){
            return mid;
        }
        else if(mid-1>start && arr[mid-1]==key){
            return mid-1;
        }
        else if(mid+1<end && arr[mid+1]==key){
            return mid+1;
        }
        else if(arr[mid-1]<key){
            start=mid+2;
        }
        else{
            end=mid-2;
        }
    }
    return -1;
}
