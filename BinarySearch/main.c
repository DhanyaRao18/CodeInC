#include <stdio.h>
#include <stdlib.h>
//#define A 10+10

int main()
{
    int n,a[20],i,key,first,second,count;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("\nEnter elements in sorted order:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter element to search:\n");
    scanf("%d",&key);

    //************ To check whether given array is ascending or descending sorted array *************
    //if(a[0]>a[1]){
    //    pos=ascendingBinarySearch(a,n,key);
    //}
    //else{
    //     pos=descendingBinarySearch(a,n,key);
    //}

    first=firstOccurrence(a,n,key);
    second=lastOccurrence(a,n,key);

    // ************ Check if elt is found in BS ********************
    //if(pos==-1){
    //    printf("\nKey is not found.");
    //}
    //else{
        //printf("\nKey is found at position %d",pos);
    //}

    printf("Count of given element is:%d",second-first+1);
    //int j=A*A;
    //printf("\n%d",j);
    return 0;
}

//**********************   First Occurrence of Given Element   **********************************

int firstOccurrence(int a[],int n,int key){
    int low=0,mid,res;
    int high=n-1;
    while(low<=high){
        //if sum of high n low is very large even than range of int,
        //overflow of int occurs, -ve value is returned
        mid=low+((high-low)/2);
        if(a[mid]==key){
            res=mid;
            high=mid-1;
        }
        else if(a[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return res;
}

//*********************   Last Occurrence of Given Element    ****************************

int lastOccurrence(int a[],int n,int key){
    int low=0,mid,res;
    int high=n-1;
    while(low<=high){
        //if sum of high n low is very large even than range of int,
        //overflow of int occurs, -ve value is returned
        mid=low+((high-low)/2);
        if(a[mid]==key){
            res=mid;
            low=mid+1;
        }
        else if(a[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return res;
}

//****************   Ascending Order Binary Search    ****************************

//int ascendingBinarySearch(int a[],int n,int key){
//    int low=0,mid;
//    int high=n-1;
//    while(low<=high){
//        mid=(low+high)/2;
//        if(a[mid]==key){
//            return mid;
//        }
//        else if(a[mid]<key){
//            low=mid+1;
//        }
//        else{
//            high=mid-1;
//        }
//    }
//    return -1;
//}

//****************   Descending Order Binary Search    ****************************

//int descendingBinarySearch(int a[],int n,int key){
//    int low=0,mid;
//    int high=n-1;
//    while(low<=high){
//        mid=(low+high)/2;
//        if(a[mid]==key){
//            return mid;
//        }
//        else if(a[mid]<key){
//            high=mid-1;
//        }
//        else{
//            low=mid+1;
//        }
//    }
//    return -1;
//}

