#include<iostream>
using namespace std;


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
    int n=3;
    cout<<"print the entire array"<<endl;
    for(int i=0; i<n; i++) {
    cout<< second[i] << " "<<endl;
    }
    //all zeros initialising all location with 0
    int zero[10] = { 0 };
    n = 10;
    cout<<"Print All zero in one array"<< endl;
    for(int i=0; i<n; i++) {
        cout<<zero[i]<< " ";
    }
    
    cout<< endl <<"Run successfully!"<<endl;
    



    return 0;
}