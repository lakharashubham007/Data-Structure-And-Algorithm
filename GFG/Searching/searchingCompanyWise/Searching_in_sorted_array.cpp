#include<iostream>
using namespace std;

int searchInSort(int arr[], int N , int K){

    int low = 0 , high = N-1;

    while(low <= high ){
        int mid = low+high/2;
        

        if(arr[mid] == K)
         return 1;

         else if(arr[mid] > K)
           high = mid - 1;
        
        else
         low = mid + 1; 
           
    }
    return -1;
}

int main() {


    int arr[] = { 1, 5, 6 } , N = 3;

    int K=1;

    cout<<searchInSort(arr, N , K)<<endl;

    return 0; 
}