/*
    Merge Sort : It follows the principle of
    divide and conquer. At first we divide
    the array into partitions until each 
    array contains only one elemenet and 
    then merge two sorted arrays to form 
    a bigger sorted array.
    Time Complexity : O(Nlog(N))
    Space Complexity : O(N)
*/
#include <iostream>
using namespace std;
//Function used to merge two arrays
void merge(int arr[],int low,int high,int mid){
    int i_of_1st=low;
    int i_of_2nd=mid+1;
    int c[high-low+1];
    int start=0;
    while(i_of_1st<=mid&&i_of_2nd<=high){
        if(arr[i_of_1st]<=arr[i_of_2nd]){
            c[start]=arr[i_of_1st];
            i_of_1st++;
        }
        else{
            c[start]=arr[i_of_2nd];
            i_of_2nd++;
        }
        start++;
    }
    while(i_of_1st<=mid){
        c[start]=arr[i_of_1st];
        i_of_1st++;
        start++;
    }
    while(i_of_2nd<=high){
        c[start]=arr[i_of_2nd];
        start++;
        i_of_2nd++;
    }
    start=0;
    for(int i=low;i<=high;i++)
    {    arr[i]=c[start];
    start++;
    }
}

//Function used to perform merge sort
void mergeSort(int arr[],int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,high,mid);
    }
}


int main() {
  int arr[]={2,3,8,1,6};
  int size=sizeof(arr)/sizeof(arr[0]);
  mergeSort(arr,0,size-1);
  for(int i=0;i<size;i++)
  cout<<arr[i]<<" ";
    return 0;
}
