#include <bits/stdc++.h>
using namespace std;

int minDiff(int n, vector<int> arr){

     // Sort array in non-decreasing order
   sort(arr.begin(), arr.end());
 
   // Initialize difference as infinite
   int diff = INT_MAX;//INT_MAX is a macro that specifies that an integer variable cannot store 
   //any value beyond this limit. 
 
   // Find the min diff by comparing adjacent
   // pairs in sorted array
   for (int i=0; i<n-1; i++)
      if (arr[i+1] - arr[i] < diff)
          diff = arr[i+1] - arr[i];
 
   // Return min diff
   return diff;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &el: arr){
        cin>>el;
    }
    int ans = minDiff(n, arr);
    cout << ans << "\n";
}

/*
Time Complexity: O(n log n).
Auxiliary Space: O(1)

*/