#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,arr[20],index,i;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("\nEnter elements in sorted rotated order:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    index=numberOfRotations(arr,n);
    if(index==-1){
        printf("\nArray elements are either rotated completely or not rotated.");
    }
    else{
        printf("\nNumber of times sorted array rotated is:%d",n-index);
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
