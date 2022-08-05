#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    bool swapped;
    for(int i=0; i<n; i++){

        swapped = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        break;
    }
}


int main() {
    int a[] = { 1,0,1,1,0 };
    bubbleSort(a, 5);
    for(int i =0; i< 5; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}