#include<iostream>
using namespace std;

int main() {
int n = 6;
int sum = 0;
int arr[] = { 1,1,1,1,1,1};

for(int i=0; i<n; i++) {
  sum = sum + arr[i];
}

cout<<sum<<endl;
    return 0;
    
}