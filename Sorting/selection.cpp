/*
Selection sort is a type of sorting in which in each iteration we try to find the minimum element 
and swap the current element with it;
Time Complexity : O(N^2) In worst complexity it traverse through N^2 elements
Sapce Complexity : O(1) No extra space is required
*/
#include <iostream>
using namespace std;
int main() {
    int arr[]={4,5,1,2,3};
    //Finding the length of the array
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        int curr_min_index=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[curr_min_index]){
                curr_min_index=j;
            }
        }
        swap(arr[i],arr[curr_min_index]);
    }
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}
