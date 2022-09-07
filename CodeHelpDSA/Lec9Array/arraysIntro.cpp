#include<iostream>
using namespace std;

void printArray() {

}


int main() {

   //declare
   int num[10];

   //accessing an array
   cout<< "Value: " << num[0] <<endl;

    //initialising ana array
    int second[3] = { 5, 7, 11};

    cout<<second[2]<<endl;

    int third[15] = { 2, 7 };
    
    int n = 15;
    cout<<"print array"<<endl;
   
    for(int i=0; i<n; i++){
        cout<<third[i]<<" ";
    }


//initialising all location with 1 is not possible  with below code
    int four[15] = {1};
    
    //int n = 10;
    cout<<"print array"<<endl;
   
    for(int i=0; i<n; i++){
        cout<<four[i]<<" ";
    }
    return 0;
}