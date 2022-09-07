#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
 
 cout<<"printing the array"<<endl;

 for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
 }
 cout<<"printing DONE"<<endl;
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
    //cout<<"print array"<<endl;
    printArray(third,15);
    int thirdSize = sizeof(third)/sizeof(third[0]);
    cout<<"size of thirdSize is: "<< thirdSize <<endl;

//initialising all location with 1 is not possible  with below code
    int four[10] = {1};
    
   n = 10;
  printArray(four,10);
    
    int fifth[10] = {1};
    n=10;
    printArray(fifth,10);

    int fifthSize = sizeof(fifth)/sizeof(int);
    cout<<"size of fifth is: "<< fifthSize <<endl; 
    
    return 0;
}