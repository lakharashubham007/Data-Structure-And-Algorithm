#include<iostream>
using namespace std;


int binarySearch(int arr[], int size, int key){

    int start = 0;//first index
    int end = size-1;//last index

    int mid = start + (end-start)/2;//mid index

    //while condition shows that atleast more than  2 elements present
    while(start <= end){
        //if element found in mid 
        if(arr[mid] == key) {
            return mid;
        }

        //go to the right side
        if(key > arr[mid]){
            start = mid + 1;
        }
        //go to left side
        else{
            end = mid - 1; 
        }
        //every time find mid element
        mid = start + (end - start)/2;
    }
    //if element not found return -1
    return -1;
}

int main() { 

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3, 8, 11, 15, 17};

    int evenIndex = binarySearch(even, 6, 6);

    cout << " Index of 6 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 15);

    cout << " Index of 15 is " << oddIndex << endl;


    return 0;
}