#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here TC = O(n)  SC = O(1)
        int count = 0, res = 0;
        for(int i=0; i<size; i++){
            if(count==0)
            res=a[i];
            if(res==a[i])
            count++;
            else
            count--;
        }
        count = 0;
        for(int i=0; i<size; i++){
            if(a[i]==res)
            count++;
        }
        if(count>size/2)
        return res;
        else
        return -1;
    }
};

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Solution obj;
    cout<<obj.majorityElement(arr,n)<<endl;
    return 0;
}