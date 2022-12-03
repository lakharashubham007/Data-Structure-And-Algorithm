
#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverseArr(int arr[], int n){

    int start = 0;
    int end = n-1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}



int main() { 
    int arr[6] = { 1,2,3,4,5,6 };
    
    reverseArr(arr, 6);
   
    printArray(arr, 6);

    return 0;
}