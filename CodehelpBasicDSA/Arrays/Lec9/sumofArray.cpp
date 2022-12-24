#include<iostream>
using namespace std;

int sum(int arr[], int n){
 int sum = 0;   
 for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    //int arr[] = { 1,2,3,4,5 };
    int arr[] = { 12, 3, 4, 15 };
    int n = sizeof(arr)/sizeof(arr[0]);    
   // int sum = sumfunction(arr, n);

    cout<<"Sum of array is: "<<sum(arr,n)<<endl;
    
    return 0;
}