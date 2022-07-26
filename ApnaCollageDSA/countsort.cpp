#include<iostream>
using namespace std;

void countSort(int arr[], int n){

    //denote max element
    int k = arr[0];
    for(int i = 0; i < n; i++) {
        k = max(k, arr[i]);
    }

    //this is count array no. of same elements
    int count[k] = {0};
    for(int i=0; i < n; i++) {
        count[arr[i]]++;
    }

    //modified array with correct position
    for(int i=1; i <= k; i++) {
        count[i] += count[i-1];
    }
   
   //update position decrement and store
    int output[n];
    for(int i = n-1; i >= 0; i--) {
        output[--count[arr[i]]] = arr[i];
    }

//store ssorted array
    for(int i=0; i<n; i++) {
        arr[i] = output[i];
    }
}


int main() {

    int arr[]={1,3,2,3,4,1,6,4,3};
    countSort(arr, 9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
}

//Time Complexity

//O(max(A^i , N))