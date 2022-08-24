#include<iostream>
using namespace std;

void sortArray(int *arr, int n) {

    //base case
    if(n==0 || n==1){
        return;
    }

    //1 case
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    //recurcive call
    sortArray(arr, n-1);
}


int main() {

    int arr[6] = { 2, 5, 6, 8, 1, 4};
    //int n = 6;

   sortArray(arr, 6);

   for(int i=0; i<6; i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;

   return 0;
    
}