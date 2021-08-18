/*
    Insertion  Sort : It is a  type of sorting algorithm in whch the array is divided into sorted and unsorted array. The values from the unsorted 
    array are placed at the correct position in the sorted part.
    Time Complexity : O(N^2)
    Space Complexity : O(1)
*/
#include <iostream>
#include<vector>
using namespace std;
void iterative_insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr_pos=i-1;
        while(curr_pos>=0&&arr[curr_pos]>arr[curr_pos+1]){
            swap(arr[curr_pos],arr[curr_pos+1]);
            curr_pos--;
        }
        
    }
}
void recur_insertion_sort(vector<int> &arr,int n,int i){
        if(i==n)
        return;
        int curr_pos=i-1;
        while(curr_pos>=0&&arr[curr_pos]>arr[curr_pos+1]){
            swap(arr[curr_pos],arr[curr_pos+1]);
            curr_pos--;
        }
        recur_insertion_sort(arr,n,i+1);
}
int main() {
    int arr[]={4,5,1,2,3};
    
    //Length of the array
    int size=sizeof(arr)/sizeof(arr[0]);
    
    //Simple Insertion Sort
    iterative_insertion_sort(arr,size);

    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<"\n";
   
   //Recursive Insertion Sort
    vector<int> brr={4,5,1,2,2};
    recur_insertion_sort(brr,size,1);
    
     for(int i=0;i<size;i++)
    cout<<brr[i]<<" ";
    cout<<"\n";
    
}
