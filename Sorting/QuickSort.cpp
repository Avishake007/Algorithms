/*
  Quick Sort : It is a inplace algorithm which divides the arrray according the correct position 
  of the pivot element and then merged.
  Time Complexity : O(Nlog(N))
  Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;
//Getting the correct position of pivot element
int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=-1;
    for(int l=0;l<high;l++){
        if(arr[l]<pivot){
            i++;
            swap(arr[i],arr[l]);
        }
    }
    i++;
    swap(arr[i],arr[high]);
    return i;
}
//Performing Quick Sort
void quickSort(int arr[],int size,int low,int high){
    if(low<high){
        int q=partition(arr,low,high);
        quickSort(arr,size,low,q-1);
        quickSort(arr,size,q+1,high);
    }
}
int main(void){
    int arr[]={4,2,6,2,8,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,size,0,size-1);
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}
