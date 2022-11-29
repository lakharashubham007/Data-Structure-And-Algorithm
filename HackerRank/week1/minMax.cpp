#include<bits/stdc++.h>
using namespace std;


void minMax(vector<int>&arr){

    int min_value = 0;
    int max_value = 0;
    int n = arr.size();

    sort(arr.begin(), arr.end());

    int j = n-1;
    
    for(int i = 0; i<n-1; i++){
        min_value += arr[i];
        max_value += arr[j];
        j -= 1;
    }
    cout<<min_value<<" "<<max_value<<endl;
}

int main() {

    vector<int>arr = { 1 ,2, 3, 4, 5 };
    minMax(arr);
}