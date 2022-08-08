#include<iostream>
#include<algorithm>
using namespace std;

int search(int arr[], int N, int X){

    int i;

    for(i=0; i<N; i++){
        if(arr[i] == X)
        return i;
    }
    return -1;
}


int main() {
      
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
   
    // Function call
    int result = search(arr, n, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;

}


/*

Time complexity: O(N)
Auxiliary Space: O(1)

*/