#include<iostream>
using namespace std;

vector<int> wiggleSort(vector<int> &arr, int n){
    
}


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++)
    cin >> arr[i];

    vector<int> ans = wiggleSort(arr, n);
    for(int i=0; i<n, i++){
        cout << ans[i] <<" ";
    }
}