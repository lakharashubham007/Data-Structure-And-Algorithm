#include<iostream>
using namespace std;


// A utility method to swap two numbers.
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sortInWave(int arr[] , int n){

//Traverse all elemnets
for( int i=0; i<n; i+=2){
//If current even element is smaller than previous
if(i>0 && arr[i-1] > arr[i])
swap(&arr[i], &arr[i-1]);

if(i<n-1 && arr[i] < arr[i+1] )
swap(&arr[i], &arr[i+1]);
}
}




int main(){

    int arr[] = { 10,90,49,2,1,5,23 };
    int n = sizeof(arr)/sizeof(arr[0]);
    sortInWave(arr, n);
    for(int i=0; i<n; i++)
    cout<< arr[i] <<" ";
    return 0; 
}