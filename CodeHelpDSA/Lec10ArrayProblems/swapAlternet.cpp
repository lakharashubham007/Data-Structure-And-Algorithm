#include<iostream>
using namespace std;


void printArray(int arr[], int n){

    for(int i=0; i<n; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



void swapAlternet(int arr[], int size){

    for(int i=0; i<size; i+=2){
        if(i+1 < size){//last element where you want to swap
        swap(arr[i],arr[i+1]);
        }
    }
}



int main(){

int even[8] = {  1,2,3,4,5,6,7,8 };
int odd[5] = { 1,2,3,5,4 };

swapAlternet(even, 8);
printArray(even, 8);

cout<<endl;

swapAlternet(odd, 5);
printArray(odd, 5);

return 0;
}