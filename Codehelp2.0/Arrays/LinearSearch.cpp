#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){

    for( int i=0; i<size; i++){
        if(arr[i] == key) {
            return 1;
        }
    }
    return 0;
}

int main() {


    int arr[10] = { -2, 1, 4, 5, 8, 7 ,-11 ,15 ,-19, 55 };

    cout<<"Enter the element for search : "<<endl;
    int key;
    cin>>key;
    bool found = search(arr,10,key);

    if( found ){
        cout<<"Element is present baby"<<endl;
    }else {
        cout<<"Element is absent  bro!😏"<<endl;
    }
    return 0;
}