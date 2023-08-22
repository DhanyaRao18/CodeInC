#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,arr[20],index,key,first,second,i;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("\nEnter elements in sorted rotated order:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter key element to search:\n");
    scanf("%d",&key);
    index=numberOfRotations(arr,n);
    first=ascendingBinarySearch(arr,0,index-1,key);
    second=ascendingBinarySearch(arr,index,n-1,key);
    if(first==-1 && second==-1){
        printf("\nElement is not found.");
    }
    else if(first>-1){
        printf("\nElement is found at position: %d",first);
    }
    else{
        printf("\nElement is found at position: %d",second);
    }
    return 0;
}

int numberOfRotations(int a[20],int n){
    int mid,low=0;
    int high=n-1;
    while(low<=high){
        mid=low+((high-low)/2);
        int prev=(mid+1)%n;
        int next=(mid+n-1)%n;
        if(a[mid]<a[prev] && a[mid]<a[next]){
            return mid;
        }
        if(a[low]<=a[mid]){
            low=mid+1;
        }
        else if(a[high]>=a[mid]){
            high=mid-1;
        }
    }
    return -1;
}

int ascendingBinarySearch(int arr[],int start,int end,int key){
    int mid;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
