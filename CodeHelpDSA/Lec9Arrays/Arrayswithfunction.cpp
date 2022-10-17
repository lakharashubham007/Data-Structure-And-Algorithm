#include<iostream>
using namespace std;


void printArray(int arr[], int size) {

    cout<<" printing the array "<< endl;
    //print the array
    for(int i=0; i<size; i++) {
        cout<< arr[i] << " ";
    }
    cout<<"printing Done"<<endl;
}

int main() {

    //declare
    int number[15];
    //accessing array
    cout<<"Value at 1 index "<< number[1]<<endl;
    cout<<"Value at 0 index "<< number[0]<<endl;
    //cout<<"Value at 20th index "<<number[25]<<endl;//we have to initialize array first
    //initialising an array
    int second[3] = { 5,7,11 };
    cout<<"value at 2 index "<<second[2]<<endl;
    //print the array
    int third[15] = { 2,7 };
    //int n=15;
    printArray(third, 15);
    //all zeros initialising all location with 0
    int zero[10] = { 0 };
    //int n = 10;
    printArray(zero, 10);
    
    cout<< endl <<"Run successfully!"<<endl;
    



    return 0;
}