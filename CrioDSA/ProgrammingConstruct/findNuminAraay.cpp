#include<bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n, int key){
    int i;
    for(i=0; i<n; i++)
        if(arr[i] == key)
        return i;
    
    return -1;
}
/aadd only ocmnmment
int main() {
    int arr[] = { 12, 34 , 10 , 6, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 10;
    int position = findElement(arr, n , key);
    
    if(position == -1)
     cout<<"Element not found";
     else
      cout<<"Element found at position: "<<position+1;
    
    return 0; 
}