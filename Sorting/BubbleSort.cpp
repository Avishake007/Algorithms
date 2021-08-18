/*
    Bubble Sort : It is the simplest seraching algorithm in which
    the adjacent elements are swapped is they are in the wrong order.
    Time Complexity : O(N^2)
    Space Complexity : O(1)
*/
#include <iostream>
using namespace std;
void recur_bubble_sort(int arr[],int i,int n){
    if(i==n)
    return;
    for(int j=0;j<n-i;j++){
        if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
    }
    recur_bubble_sort(arr,i+1,n);
}
int main() {
    int arr[]={4,5,1,2,3};
    
    //Length of the array
    int size=sizeof(arr)/sizeof(arr[0]);
    
    //Implementing Bubble Sort
   for(int i=1;i<size;i++){
       for(int j=0;j<size-i;j++){
           if(arr[j]>arr[j+1]){
               swap(arr[j],arr[j+1]);
           }
       }
   }
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<"\n";
    //Recursive Bubble Sort
    int brr[]={4,5,1,2,3};
    recur_bubble_sort(brr,1,size);
     for(int i=0;i<size;i++)
    cout<<brr[i]<<" ";
}
